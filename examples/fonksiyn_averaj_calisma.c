

#include <stdio.h>
void getData();
float getAveraj();
int notlar[5];

int main()
{
	getData();
	printf("girilen notlarin ortalamsi = %.2f", getAveraj());
	
	//~ int notlar[5];
	//~ float sonuc = 0;
	
	//~ for(int i=0; i<5; i++)
	//~ {
		//~ printf("%d. Notunuzu giriniz\n", i+1);
		//~ scanf("%d", &notlar[i]);
		
	//~ }
	
	//~ for(int i=0; i<5; i++)
	//~ {
		//~ sonuc += notlar[i];
		
	//~ }
		//~ sonuc /= 5;
		//~ printf("%.2f", sonuc);
	
	//getData();
	
		
	return 0;
}
void getData()
{
	

	
	for(int i=0; i<5; i++)
	{
		printf("%d. Notunuzu giriniz\n", i+1);
		scanf("%d", &notlar[i]);
		
	}
	
	//~ getAveraj(notlar);
	
}
float getAveraj()
{
	float sonuc = 0;
	
	for(int i=0; i<5; i++)
	{
		sonuc += notlar[i];
		
	}
	sonuc /= 5;
	//~ printf("%.2f", sonuc);
	
	return sonuc;
	
}
