#include <stdio.h>

int main ()
{
	int n, a[1000], d = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for (int i = 1; i<=n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 1; i<=n; i++)
	{
		printf("%d ", a[i]);
	}
	for (int i = 1; i<=n-2; i++)
	{
		if (a[i]+a[i+1]>a[i+2] && a[i+1]+a[i+2] > a[i] && a[i]+a[i+2] > a[i+1])
			d++;
	}
	if(d!=0) 
		printf("\nCo %d bo 3 phan tu lien tiep co the la do dai 3 canh tam giac", d);
	else 
		printf("\nKhong co bo 3 phan tu lien tiep co the la do dai 3 canh tam giac");
}


