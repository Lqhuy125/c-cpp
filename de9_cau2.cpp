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

void tongcot(int a[100][100], int m, int n)
{	int tong = 0;
	for (int i = 0; i<m; i++)
	{	
		for (int j = 0; j<n; j++)
		{	
			if (a[j][i] % 2 == 0)
			{
				tong += a[j][i];
			}
		}
	}
	printf("\nTong cac cot co phan tu chan = %d", tong);
}
void vitri(int a[100][100], int m, int n)
{	int hang, cot;
	int max = a[0][0];
	for (int i = 0; i<m; i++)
	{	
		for (int j = 0; j<n; j++)
		{	
			if (a[i][j] > max)
			{
				max = a[i][j];
				hang = i;
				cot = j;
			}
		}
	}
	printf("\nPhan tu max o vi tri [%d;%d]", hang, cot);
}
bool kiemtramatran(int a[100][100], int m, int n)
{	
	for (int i = 0; i<m; i++)
	{	
		for (int j = 0; j<i; j++)
		{
			if (i>j && a[i][j]==0)
			{
				return true;
			}	else return false;
		}
	}
	
}
int main()
{	int kq;
	scanf("%d%d", &m,&n);
	nhapmang(a, m, n);
	xuatmang(a, m, n);
	tongcot(a,m,n); 
	vitri(a,m,n); 
	if (kiemtramatran(a,m,n))
	{
		printf("\nDay la ma tran tam giac tren");
	} else {
		printf("\nDay khong la ma tran tam giac tren");
	}
}
