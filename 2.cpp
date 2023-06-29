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
void tongmoidong(int a[100][100], int m, int n)
{
	for (int i = 0; i<m; i++)
	{	int tong = 0;
		for (int j = 0; j<n; j++)
		{
			tong += a[i][j];
		}
		printf("\nTong dong %d = %d",i, tong);
	}
}
void tichduongcot(int a[100][100], int m, int n)
{	
	for (int i = 0; i<m; i++)
	{	int tich = 1;
		for (int j = 0; j<n; j++)
		{	
			if (a[j][i] > 0)
			{
				tich *= a[j][i];
			}
		}
		printf("\nTich dong %d = %d", i, tich);
	}
	
}
int main()
{	scanf("%d%d", &m,&n);
	nhapmang(a, m, n);
	xuatmang(a, m, n);
	tongmoidong(a,m,n);  
	tichduongcot(a, m , n); 
}
