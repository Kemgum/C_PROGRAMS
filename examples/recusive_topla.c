

#include <stdio.h>
int f(int x);

int main()
{
	printf("toplam = %d", f(5));
	
	
	return 0;
}
int f(int x)
{
	
	
	if(x==1)
	{
		
		return 1;
	}
	
	
	return x * f(x-1);
}
