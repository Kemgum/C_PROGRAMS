#include <stdio.h>

int main() 
{

    // char x;

    // printf("Lutfen bir karakter giriniz: "); 
    // x = getchar();

    // puts("Girilen karakter: ");
    // putchar(x);

    // putchar(69);

    // for(int i=48; i<=55; i++) //01 02 03 04 05 06 07 08 12 13 14 15 16 17 18 23 24 25 26 27 28 34 35 36 37 38 45 46 47 48 56 57 58 67 68 78
    // {
        
        
    //     for(int j=i+1; j<=56; j++)
    //     {
    //       putchar(i);
    //       putchar(j);
    //       putchar(' ');

    //     }  

    // }


    for(int i='0'; i<='9'; i++) //00 10 11 20 21 22 30 31 32 33 40 41 42 43 44 50 51 52 53 54 55 60 61 62 63 64 65 66 70 71 72 73 74 75 76 77 80 81 82 83 84 85 86 87 88 90 91 92 93 94 95 96 97 98 99
    {

        for(int j='0'; j<=i; j++)
        {
           putchar(i);
           putchar(j);
           putchar(',');
           putchar(' '); 


        }

    }


    return 0;
}