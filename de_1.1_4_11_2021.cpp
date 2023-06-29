#include <stdio.h>

int main ()
{
	int n,h, s=0, d=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	int a[n+1];
	for (int i = 1; i<=n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Mang da nhap la:\n");
	for (int i = 1; i<=n;i++)
	{
		printf("a[%d] = ", i);
		printf("%d\n", a[i]);
	}
	printf("Nhap h = ");
	scanf("%d", &h);
	for (int i = 1; i<=n; i++)
	{
		if (a[i] < a[h])
		{
			s += a[i];
			d++;
		}
		
	}
	if (d==0) printf("khong co phan tu thoa man");
	else printf("TBC cac so nho hon so o vi tri thu %d la %.2f",h,(float)s/d);
	return 0;
}

