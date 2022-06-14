#include <stdio.h>
#include<string.h>

void strReverce( const char *x)
{
    int i, len, temp;

    len = strlen(x);

    for(i=0; i<len/2; i++)
    {
        temp = x[i];
        x[i] = x[len-i-1];
        x[len-i-1] = temp;

      


    }

}

int main()
{
    const char *cumle = "selam dunya";

    if(strReverce(cumle))
    {
        printf("%s", cumle);

    }

    return 0;
}