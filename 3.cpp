#include <stdio.h>
#include <string.h>
int a[100][100], m,n;
void nhapmang(int a[100][100], int m, int n)
{
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{	
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatmang(int a[100][100], int m, int n)
{
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}
void tongphantuchan(int a[100][100], int m, int n)
{	int tong = 0;
	for (int i = 0; i<m; i++)
	{	
		for (int j = 0; j<n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				tong += a[i][j];
			}
		}
	}
	printf("\nTong = %d",tong);
}
void tichphantule(int a[100][100], int m, int n)
{	int tich = 1;
	for (int i = 0; i<m; i++)
	{	
		for (int j = 0; j<n; j++)
		{	
			if (a[j][i] % 2 != 0)
			{
				tich *= a[i][j];
			}
		}
	}
	printf("\nTich = %d",tich);
}
int main()
{	scanf("%d%d", &m,&n);
	nhapmang(a, m, n);
	xuatmang(a, m, n);
	tongphantuchan(a, m, n);
	tichphantule(a,m,n);  
}
