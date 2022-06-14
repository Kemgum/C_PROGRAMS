#include <stdio.h>

int main()
{

    int sayi = 5;

    int *p_sayi;

    p_sayi = &sayi;

    printf("sayi degiskenin degeri = %d\tsayi degiskenin adresi = %p\n", sayi, &sayi);
    printf("sayi degiskenin degeri = %d\tsayi degiskenin adresi = %p\n", *p_sayi, p_sayi);
    printf("pointerin kendi adresi = %p", &p_sayi);
    *p_sayi = *p_sayi + 5;

    printf("\n%d %d", sayi, *p_sayi);


    return 0;
}