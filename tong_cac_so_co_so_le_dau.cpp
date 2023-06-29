#include <stdio.h>
int a[100], n;
int kiemtrasodaulale(int n)
{
	int du;
	while (n>0)
	{
		du = n % 10;
		n = n / 10;
	}
	return du;
}
void nhapmang(int a[100], int n)
{
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[100], int n)
{
	for (int i = 0; i<n; i++)
	{
		printf("a[%d] = ", i);
		printf("%d ", a[i]);
	}
}
void tinhtongsodaule(int a[100], int n)
{
	int tong = 0;
	for (int i = 0; i<n; i++)
	{
		if (kiemtrasodaulale(a[i]) % 2 != 0)
		{
			tong += a[i];
		}
	}
	printf("Tong cac so co so dau tien la le = %d ", tong);
}
int main()
{
	scanf("%d", &n);
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\n");
	tinhtongsodaule(a,n);  
}


