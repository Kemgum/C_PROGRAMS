#include <stdio.h>

void my_swap(int *p_x, int *p_y);

int main()
{
    // int sayi_bir;
    // int sayi_iki;

    // int *p_sayi_bir = &sayi_bir;
    // int *p_sayi_iki = &sayi_iki;

    // printf("Birinci sayiyi giriniz: \n");
    // scanf("%d", p_sayi_bir);
    // printf("Ikinci sayiyi giriniz: \n");
    // scanf("%d", p_sayi_iki);

    // printf("%d", *p_sayi_bir + *p_sayi_iki);

    int x = 10, y = 20;

    

    printf("%d %d\n", x, y);

    my_swap(&x, &y); // Degiskenler adreslerle karsilandigi icin direk o adrese gitmesini soyluyoruz bu yuzden & kullaniyoruz zaten asagida onlari karsilamisiz


    printf("%d %d\n", x, y);


    return 0;

}

void my_swap(int *p_x, int *p_y) // Burada degiskenleri adreslerle karsiliyoruz.
{

    
    int degistirme;

    degistirme = *p_x;
    *p_x = *p_y;
    *p_y = degistirme;
    


    
}