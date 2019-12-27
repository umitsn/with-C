#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Ümit Þen - Ýzmir 2019 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"turkish");
	int sayi = atoi(argv[1]);
	int dx = atoi(argv[2]);
	int k;
	printf("Girilen Sayý  : %d\n", sayi);
	printf("Artma Miktarý : %d\n\n", dx);
	int s = 0; // bulunan dizi sayýsý
	int N = 2 * sayi;
	for (k = 1; k < sayi; k++)
	{	
		if (N % (k+1)== 0)
	    {
	      float x;
	      x = ((N / (k+1))- dx*k) / 2.0;
	      if (fmod(x, 1) == 0 && x > 0 && (x+k*dx)>0)
	      {
	        s += 1;
	        printf("%.3d. Dizi : Ýlk Terim : %15d, Son Terim : %15d, Terim Sayýsý : %15d\n", s, (int)x, (int)(x + dx*k), (k + 1));
	      }
	    }
	  }
	if(s==0)
	{
		printf("Girilen Þartlara Uygun Dizi Bulunamadý...\n");
	}
	return 0;
}
