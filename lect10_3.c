#include <stdio.h>

int main(void)
{
    FILE *f;
    char filename[255]={0};
    size_t size;
    printf("Input file name: ");
    scanf("%s",filename);
    f = fopen(filename,"r"); // открытие файла filename на чтение
    if (f != NULL)
    {
        fseek (f, 0, SEEK_END);
        size = ftell (f);
        printf ("File size of '%s' - %llu bytes.\n",filename, size);
    }
    else
    {
        printf ("Can't open file %s\n", filename);
    }
    fclose(f);  //Закрытие файла.

    return 0;
}
