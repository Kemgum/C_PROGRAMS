
/* 1 x 2 = 2
 * 1 x 3 = 3
 * ... 1 x 10 = 10
 * 2 x 1 = 2
 * for dongusuyle boyle bir program yaz
 * 
 * */

#include <stdio.h>

int main()
{
	int x = 1;
	int y = 1;
	
	for(x=1; x<=10; x++)
	{
		
		
		
		for(y=1; y<=10; y++)
		{
			printf("%d X %d = %d\n",x ,y ,x*y);
			
			
		}
	
		printf("*******************\n");
	}
	
//for loopu isini bitirene kadar devam eder sonra basa sarar
	
	return 0;
}

