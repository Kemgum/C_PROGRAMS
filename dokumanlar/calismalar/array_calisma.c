


#include <stdio.h>

int main()
{
	//~ int notlar[5] = {15, 25, 45, 55, 65};
	//~ int notlar[10];
		
	//~ for(int j=0;j<11;j++)
	//~ {
		//~ notlar[j] = (j+1)*(j+1);
		
	//~ }
	//~ for(int i=0;i<10;i++)
	//~ {
		//~ printf("%d\n", notlar[i]);
		
		
	//~ }
	
	//~ float boylar[5];
	
	//~ for(int k=0;k<5;k++)
	//~ {
		//~ boylar[k] = 0;
		
		//~ printf("%d. boyu giriniz\n", k+1);
		//~ scanf("%f", &boylar[k]);
			
	//~ }
	//~ for(int k=0;k<5;k++)
	//~ {
		//~ printf("%.2f ", boylar[k]);// .2 tarzi yuzdenin sonuna ekledigimizde noktadan sonra kac basamak print edecegimizi belirtiyoruz
		
	//~ }
	
	
	//~ char isim[20] = {'k', 'e', 'm', 'a', 'l', 'k', 'e', 'm', 'a', 'l', '\0'};// \0 stringse yani %s li bisey yazicaksan olmak zorunda.
	//~ char isim2[6] = "ertan";// bir kelime yazarken harf sayisinin bir fazlasini yazmamiz gerekir.
	
	//~ for(int k=0;isim[k]!='\0';k++)
	//~ {
		//~ printf("%c", isim[k]);
		
		
	//~ }
	
	//~ printf("\n%s ", isim);//%s karakter dizilerini ekrana yazar bunu yazman gerekir.

	
	char renk[5] = "mavi";
	char kullanici_renk[20];
	unsigned char status = 1;
	printf("Kemalin en sevdigi renk nedir?\n");
	scanf("%s", kullanici_renk);
	
	for(int k=0;k<5;k++)
	{
		if(kullanici_renk[k] != renk[k])
		{
			
			printf("Yanlis cevap %s", kullanici_renk);
			status = 0;
			break;
			
			
		}
		
		

	}
	
		if(status == 1)
			{
				printf("dogru cevap!");	
			}
	
	return 0;
}
// ipucu bir status diye durum degiskeni olucak ilk yanlista statusu sifir yapicaksin ve breakle onu kiricaksin. dogru cevap yazisini bir kere yazican
