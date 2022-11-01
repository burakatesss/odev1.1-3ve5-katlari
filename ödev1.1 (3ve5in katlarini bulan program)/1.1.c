
 	/*
	 Burak ATEŞ ( Öğr. No.211451001) Algorithm and Programming Homework 1.1
 	1000'in altındaki 3 veya 5'in tüm katlarını bulan program.
	 */ 

#include <stdio.h>      

									// değişkenler tamsayı olduğundan int olarak tanımlandı.
	int t3=0;  						// 3'ün katlarının toplamı.
	int	t5=0; 						// 5'in katlarının toplamı.
	int t15=0;						// 15'in katlarının toplamı.
	int	T=0;						// 3 veya 5'in katlarının toplamı.
	int i,s,j;						// i,s,j isimli tam sayı türünde değişkenler tanımlandı sayaç için kullanılacak.

int main()						
{	
	t3 = kat3 ();					// 3'ün katları toplamı kat3 isimli fonksiyondan çağrıldı ve t3 değişkenine atandı.
	t5 = kat5 ();					// 5'in katları toplamı kat5 isimli fonksiyondan çağrıldı ve t5 değişkenine atandı.
	t15 = kat15 ();					// 15'in katları toplamı kat15 isimli fonksiyondan çağrıldı ve t15 değişkenine atandı.
									// toplam hesaplanırken -t15 işlemi yapılıyor çünkü, 15'in katları hem 3'ün hem de 5'in katları alınırken iki defa alındığından bir defa çıkartılıp doğru sonuç elde edilecek
	T=t3+t5-t15;					// 3 veya 5'in katlarının toplamları toplanıyor.
	
	printf("3'un katlarinin toplami: %d \n5'in katlarinin toplami: %d \nGenel Toplam: %d\n",t3,t5,T);		// Sonucumuz ekrana yazdırılıyor.
	system("pause")	;	
}								

 int kat3 ()						// 3'ün katlarını bulmak için özel üretilen fonksiyon
 {	
	for(i=3;i<1000;i+=3)			// i 3'den başlayarak üçer üçer artacak ve 1000'e kadar döngü sağlanacak.
	{
		t3=t3+i;					// 3'ün katlarının toplamı hesaplanıyor.
	}
	return t3;						// Hesaplanan işlem dışa aktarılıyor.
}

int kat5 ()							// 5'in katlarını bulmak için özel üretilen fonksiyon
{
	for(s=5;s<1000;s+=5)			// i 5'den başlayarak beşer beşer artacak ve 1000'e kadar döngü sağlanacak. 1000'in altındaki sayılar istendiği için 1000 dahil değil.
	{
		t5=t5+s;					// 5'in katlarının toplamı hesaplanıyor.
	}
	return t5;						// Hesaplanan işlem dışa aktarılıyor.
}
	
int kat15 ()						// 15'in katlarını bulmak için özel üretilen fonksiyon
{
	for(j=15;j<1000;j+=15)     		// j 15'ten başlayarak onbeşer onbeşer artacak ve 1000'e kadar döngü sağlanacak.
	
	{
		t15=t15+j;					// 15'in katlarının toplamı hesaplanıyor.
	}	
	return t15;						// Hesaplanan işlem dışa aktarılıyor.
	
	
	
}	

