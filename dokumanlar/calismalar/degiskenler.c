/*
8 tane bit bir araya gelir 1 byte olusturur

her bir basamak bir bit tir

Ya 0 yada 1 olabilir

integer => 10 sayi sayi sisteminde bir tam sayi

*/


#include <stdio.h>

int main()
{
	16 // integer sayi sabiti( degismezi)
	23.56 // float point number ( kayan noktali sayi )
	'a','3','?' // charcter char 
	"selam dunya" // karakter dizisi array char degisken (12) = "selam dunya"
	0b10111 // binary
	int sayi = 0b101111; // 47
	int sayi1 = 075; // basinda 0 gorursen bu sekizlik bir sayi sistemidir
	int sayi2 = 0x3f; // 0x varsa bu bir hexedecimal sayi sistemi yani 16 lik
	
	float pi = 3.14; // kurulum (initialization) ilk degerini aliyorsa kurulum oluyor
	
	pi = 3.25; // assigment (atama) daha sonra degeri degisiyorsa atama oluyor
	
	return 0;
}

/*
	degiskenler bizim saklama kaplamarimizdir. Ayni buzdalabindaki bolumler gibide dusunebilirsin
	verilerimiz bizim ram mimizde saklaniyor. Yerlerini bilmedigimiz icin degiskenlerle adreslere 
	isimler veriyoruz ve gerektigi zaman onlari kullanabiliyoruz.
*/

/* degiskenlere isim verirken rakamla baslayamaz. Ama altrite veya bir harfle baslayabilir.
   noktalar virguller kullanilamaz. Yani kisaca C icin ozel anlami olan noktalama isaretlerini kullanamiyoruz.
   buyuk kucuk harfe duyarli bir dil C bu yuzden ayni kelimeyi buyuk kucuk harfle yazarsan farkli olur.
*/

// string format kacis karakterleri
/*
	\n = enter dusunun gorevini yapiyor
	%d desimal sayi 
	%f float sayi
	%c karakter
	%x 16 lik sayi sistemi (hex)
	
   
