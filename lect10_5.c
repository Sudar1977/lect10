#include <stdio.h>

int main(void)
{
    FILE *f;
    unsigned int i = 0x31323334, u=0,rc;
    f = fopen("out.bin","wb"); // открытие файла in.txt на чтение
    rc = fwrite (&i,1,sizeof(int),f); // данные запишутся в формате little-endian
    printf("%d\n",rc);
    fclose(f);
    f = fopen ("out.bin", "rb");
    rc = fread (&u, 1, 5, f);// считай 5 элементов по 1 байту
    printf("%d\n",rc);
    fclose(f);
    printf("u = %x\n",u); // u = 34
    return 0;
}
