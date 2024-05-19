#include <stdio.h>

int main(void)
{
    FILE *f;
    int sum = 0, n;
    f = fopen("in.txt","r"); // открытие файла in.txt на чтение
    while (fscanf (f, "%d", &n) == 1)//1 2 3 4 dsada 234
        sum+=n;
    fclose(f);  //Закрытие файла.
//После окончания работы с файлом необходимо убедиться,
//что все записанные данные попали на диск, и освободить все ресурсы, связанные с ним.
    printf ("%d\n", sum);
    return 0;
}
