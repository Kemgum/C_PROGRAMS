#include <stdio.h>

int* f(int *p_x) 
{

    if((*p_x)&1)
    (*p_x)*=2;
    else ++(*p_x);
    return p_x;
}

int main() 
{
    int x=12;

    f(f(&x));
    printf("%d", x);
}