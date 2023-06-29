#include <stdio.h>
#include <string.h>
int a[100][100], m,n, an[100],index, bn[100];
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
void giatritrongkhoang(int a[100][100], int m, int n, int an[100], int &index)
{	int dem = 0; // dem dieu kien
	index = 0;
	for (int i = 0; i<m; i++)
	{	
		for (int j = 0; j<n; j++)
		{
			if (a[i][j] % 2 == 0 &&a[i][j] >= 5 && a[i][j] <= 20)
			{
				an[index] = a[i][j];
				dem++;
				index++;
			}
		}
	}
	printf("\nCo %d phan tu chan trong [5;20]", dem);
	for (int i = 0; i<dem; i++)
	{
		printf("\n an[%d] = %d", i, an[i]);
	}
	
}
void phantule(int a[100][100], int m, int n, int bn[100], int &index)
{	int dem = 0;
	index = 0;
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{	
			if (a[i][j] < 100 && a[i][j] % 2 != 2)
			{
				bn[index] = a[i][j];
				dem++;
				index++;
			}
		}
	}
	printf("\nCo %d phan tu le nho hon 100", dem);
	for (int i = 0; i<dem; i++)
	{
		printf("\nbn[%d] = %d", i, bn[i]);
	}
	
}
int main()
{	scanf("%d%d", &m,&n);
	nhapmang(a, m, n);
	xuatmang(a, m, n);
	giatritrongkhoang(a,m,n,an,index); 
	phantule(a, m, n, bn, index);
}
