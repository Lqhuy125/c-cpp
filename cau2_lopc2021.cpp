#include <stdio.h>
#include <math.h>
#include <string.h>

int a[100][100], tong[100];
void nhapmang(int a[100][100], int m, int n)
{
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n;j++)
		{	printf("a[%d][%d] = ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatmang (int a[100][100], int m, int n)
{
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void timmax(int a[100][100], int m, int n,  int cot)
{	int max;
	for (int i = 0; i<m; i++)
	{	
		for (int j = 0; j<n;j++)
		{	max = a[0][0];
			if(a[i][j] > max)
			{
				max = a[i][j];
				cot = j;
			}
		}
	}
	printf("\nmax = %d va o cot thu %d ", max, cot);
}
void tongduongtunghang(int a[100][100], int m, int n)
{	
	for (int i = 0; i <m; i++)
	{
		tong[i] = 0;
		for (int j = 0 ; j <n; j++)
		{	if (a[i][j] > 0)
				tong[i] += a[i][j];
		}
		printf("\nTong[%d] = %d ",i, tong[i]);
	}
	int max1 = tong[0];
	for (int i = 0; i <m; i++)
	{ 
		if (tong[i] > max1)
		{
			max1 = tong[i];
		}
	}
	for (int i = 0; i<m; i++)
	{
		if (tong[i] == max1 )
		{
			printf("\nHang %d co tong max ", i);
		}
	}
	
}
void tichduong(int a[100][100], int m, int n)
{
	int tich = 1;
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<m; j ++)
		{
			if (a[i][j] > 0)
			{
				tich *= a[i][j];
			}
		}
	}
	printf("\ntich = %d", tich);
}
int main (){
	int m, n, cot;
	scanf("%d%d", &m, &n);
	nhapmang(a, m, n);
	xuatmang(a, m, n);  
	timmax(a,m,n,cot); 
	tongduongtunghang(a, m, n); 
	tichduong(a, m, n);
	 
}

