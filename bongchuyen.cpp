#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct a
{
	char ten;
	int Sse, Sbl, Ssp; // tong so lan danh
	int se, bl, sp; //tong so lan thanh cong
		
};
int main()
{	a a[100];
	int n;
	int TongSse = 0; int TongSbl = 0; int TongSsp = 0;
	int Tongse = 0; int Tongbl = 0; int Tongsp = 0;
	scanf("%d", &n);
	for (int i = 1; i<= n; i++)
	{
		scanf("%s", &a[i].ten );
		scanf("%d%d%d", &a[i].Sse ,&a[i].Sbl ,&a[i].Ssp ); // nhap so lan danh
		scanf("%d%d%d", &a[i].se ,&a[i].bl ,&a[i].sp ); // nhap so lan danh thanh cong
		
	}
	for (int i = 1; i<= n; i++)
	{
		TongSse += a[i].Sse;
		TongSbl += a[i].Sbl;
		TongSsp += a[i].Ssp;
		
		Tongse += a[i].se;
		Tongbl += a[i].bl;
		Tongsp += a[i].sp;
	}
	printf("Service: %.2f %", (float)Tongse/TongSse * 100);
	printf("\nBlock: %.2f %", (float)Tongbl/TongSbl * 100);
	printf("\nSpike: %.2f %", (float)Tongsp/TongSsp * 100);
}
