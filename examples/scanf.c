/*
 * scanf.c
 * 
 * Copyright 2022 PC <PC@DESKTOP-LEHT9G8>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main()
{
	
	int sayi1 = 0;
	int sayi2 = 0;
	int toplamlari, farklari, carpimlari, bolumleri, mod;
	
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	toplamlari = sayi1 + sayi2;
	farklari = sayi1 - sayi2;
	carpimlari = sayi1 * sayi2;
	bolumleri = sayi1 / sayi2;
	mod = sayi1 % sayi2;
	
	printf("toplamlari = %d\nfarklari = %d\ncarpimlari = %d\nbolumleri = %d\nmod = %d", toplamlari, farklari, carpimlari, bolumleri, mod);
	sayi1 = sayi1 + 1; // esittirin sol tarafi bir adres(adrese verilen bir isim) sag tarafi ise value olmalidir her zaman 
	sayi1++; // iki tane + koydugumuz zaman degerini bir arttir demektir
	sayi1--;
	
	
	
	
	
	
	
	return 0;
}

