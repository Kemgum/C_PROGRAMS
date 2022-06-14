#include <stdio.h>

void reverce(short int *x, unsigned int len)
{
   int temp = 0;
   short int *y = x+len-1; // x+7 ayni sey x[7]

    for(int i=0; i < len/2 ; i++)
    {
        temp = *x;
       *x = *y;
       *y = temp;
        x++;
        y--;

    }



}


int main()
{
     short int sayilar[7] = {100, 200, 300, 400, 500, 600, 700};

    reverce(sayilar, 7);
    for(int i=0; i<7; i++)
    {
        
          printf("%d ", sayilar[i]);

    }

    return 0;
}