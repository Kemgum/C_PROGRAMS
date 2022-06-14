#include <stdio.h>

void convert( unsigned char *x, unsigned int len){
    for(int i=0; i<len/2; i++)
    {
        int temp = x[i];
        x[i] = x[len-i-1];
        x[len-i-1] = temp;


    }
}
int main()
{
    unsigned char sayilar[10] = {10, 25, 150, 255, 128, 14, 7, 5, 4, 3};

    convert(sayilar, 10);
    for(int i=0; i<10; i++){
    printf("%d ", sayilar[i]);  // ekran çıktısı 14 128 255 150 25 10 olmalı
    }
    return 0;
}
