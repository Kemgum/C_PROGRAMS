#include <stdio.h>

char *myStrcpy(char *dest,  const char *src);

int main()
{
    char isim[] = "Gumuscuoglu";
    // char *p_isim = "Kemal";
    
    // printf("%c %c", *(p_isim+1), isim[1]);

    char hedef[50];

    // myStrcpy(&hedef[0], &isim[0]); // ikisi ayni sey. Diziler aslinda bir pointer gibidir ve ilk elemaninin adresini saklarlar.
    myStrcpy(hedef, isim);
    
    printf("%s", hedef);

    myStrcpy(isim, "Kemal");

    printf("%s", isim);

    return 0;
}

char *myStrcpy(char *dest,  const char *src)
{
    src[0] = 'Z';
    int i = 0;

    for(i=0; src[i]!='\0'; i++)
    {
        dest[i] = src[i];
        
    }

    dest[i] = '\0';

    return dest;

}
