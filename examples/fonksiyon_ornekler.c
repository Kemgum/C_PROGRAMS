

#include <stdio.h>
int getMax(int x, int y, int z);

int main()
{
	int cevap;
	
	cevap = getMax(5, 15, 20);
	
	printf("%d", cevap);
	
	return 0;
}
int getMax(int x, int y, int z)
{
	
	if(x>=y && x>=z)
	{
		return x;
		
	}
	else if(y>=x && y>=z)
	{
		return y;
	}
	else if(z>=y && z>=x)
	{
		return z;
		
	}
	
	
}
