#include <stdio.h>

int main (){
	float a[100][100];
	int m,n;
	
	scanf("%d%d", &m, &n);
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j <n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f", &a[i][j]);
		}
	}
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{	
			printf("%.2f ", a[i][j]);
		}
		printf("\n");	
	}
	// tbc so lon hon x
	float x;
	int dem = 0;
	float tong1 = 0;
	
	printf("Nhap x = ");
	scanf("%f", &x);
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j <n; j++)
		{
			if (a[i][j] > x)
			{
				tong1 += a[i][j];
				dem++;
			}
		}
	}
	printf("TBC phan tu > x = %.3f", (float)tong1/dem);
	// tong gia tri moi hang
	float tong[100];
	
	for (int i = 0; i<m; i++)
	{	tong[i] = 0;
		for (int j = 0; j <n; j++)
		{
			tong[i] += a[i][j];
		}
		printf("\nTong hang %d = %.2f", i, tong[i]);
	}
	int sum = 0;
	
	for (int i = 0; i<m; i++)
	{
		if (tong[i] < 0)
		{
			sum++;
		}
	}
	printf("\nso hang co tong am la: %d", sum);
	return 0;
}

