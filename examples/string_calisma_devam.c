


#include <stdio.h>

void myStrip(char src[]);

char glb_temiz[30];

int main()
{
	//" Kemal  " = "Kemal"
	//	' ' '\n' '\t' 
	char local_kirli[] = "  Kemal   ";
	
	myStrip(local_kirli);

	printf("\n--%s--", glb_temiz);
	
	return 0;
}

void myStrip(char src[])//"  Kemal   "
{
	int i = 0;
	int j = 0;
	
	for(i=0; src[i]!='\0'; i++)
	{
		if(src[i]!='\n' && src[i]!=' ' && src[i]!='\t')// Buradaki 
		{
			glb_temiz[j] = src[i];
			j++;
			
		}		
		
	}
	
	glb_temiz[i] = '\0';
		
}
