

#include <stdio.h>

int main()
{
	int sayilar [4][4] = {					// ilk bastaki row(satir) ikinci ise column(sutun) satir yatay sutun dikey
							{1, 2, 3, 4},
							{5, 6, 7, 8},
							{9, 10, 11, 12},
							{13, 14,15, 16}
							
						 };
	int notlar [4][4];
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			notlar[i][j] = sayilar[i][j]; 
		}
		
	}
	
	
	for(int row=0;row<4;row++)
	{
		for(int col=0;col<4;col++)
		{
			printf("%d ", notlar[row][col]);
		}
		printf("\n");
		
	}
	
	return 0;
}

