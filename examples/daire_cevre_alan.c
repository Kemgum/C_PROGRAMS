#include <stdio.h>
#define PI 3 // bu sekilde tanimlarsak ram den yer kaybetmemis oluyoruz bu derleyici ilgilendiren bir konu oluyor bu yuzden yer kaplamaz.

int main()
{
	//Kullanicidan bir dairenin capi alinacak sonra bunun cevresi ve alani alt alta yazilicak
	//dairenin cevresi = 2*r*pi alan bulma pi*r*r
	float cap = 154.80;
	//~ const float pi = 3.14; // const yazdigimiz zaman bu degiskeni herzaman icin sabitlemis oluyoruz sistem degistirmeye izin vermiycek.
	float r = cap / 2; 
	float cevre = r * 2 * PI;
	float alan = PI * r * r;
	
	printf("cevremiz = %f\nalanimiz = %f ", cevre, alan);
	
	
	int a = 153;
	int b = 476;
	int c = a + b;
	
	printf("a + b = %d\nc + b = %d", a, b, c);
	
	return 0;
}

