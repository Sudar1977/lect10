#include <stdio.h>

int main(void)
{
    FILE *f;
    int sum = 0;
    signed char c;// обязательно signed! иначе зациклится
    f = fopen("in.txt","r+"); // открытие файла in.txt на чтение
    while ( (c=fgetc(f))!=EOF ) //1 2 3 4\n
    {
        printf("%c,%x\n",c,c);
        if(c>='0' && c<='9')
            sum += c-'0';
    }
    fprintf (f, " %d", sum);
    fclose(f);  //Закрытие файла.
    //После окончания работы с файлом необходимо убедиться,
    //что все записанные данные попали на диск, и освободить все ресурсы, связанные с ним.
    printf ("%d\n", sum);
    return 0;
}
