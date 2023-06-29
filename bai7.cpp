#include <stdio.h>

int main ()
{
	int a, b, min, max;
	
	printf("Nhap gia tri a = ");
	scanf("%d", &a);
	printf("Nhap gia tri b = ");
	scanf("%d", &b);
	min = (a>b)?b:a;
	max = (b>a)?b:a;
	printf("max = %d", max);
	printf("/nmin = %d ", min);
	

	return 0;

}

