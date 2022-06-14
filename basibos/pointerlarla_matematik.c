//adreslere sayi eklemek icin + operatoru kullanilir
//adreslerden sayi cikarmak icin - operatoru kullanilir
//++ operatoru adresleri 1 arttirir
//-- operatoru adresleri 1 azaltir

#include <stdio.h>

int main()
{

    int sayilar[5] = {1, 2, 3, 4, 5};
    char isim[] = "Kemal";

    int *p_sayilar = sayilar;
    char *p_isim = isim;

    printf("value=%d adres=%p\n", *p_sayilar, p_sayilar);
    p_sayilar = p_sayilar + 2;
    printf("value=%d adres=%p\n", *p_sayilar, p_sayilar);
    p_sayilar--;
    printf("value=%d adres=%p\n", *p_sayilar, p_sayilar);
    printf("--------------------%d----------------------\n", sizeof(char));

    for(;*p_isim != '\0'; p_isim++)
    {
        printf("%c", *p_isim);
        

    }
    
    

    return 0;
}


