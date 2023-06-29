#include <stdio.h>

int main ()
{
	int n,s,d=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	int a[n+1][n+1];
	for (int i = 0; i<n; i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("a[%d][%d] = ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Mang da nhap la:\n");
	for (int i = 0; i<n; i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i<n-1; i++)
		for (int j=i+1;j<n;j++)
			if (j>i && a[i][j]%2==0) 
				d++;
	printf("Co %d phan tu chan nam phia tren duong cheo chinh\n", d);
			
	float d1 = (n*n-n)/2;
	for (int i = 1; i<n; i++)
		for (int j=n-1; j<n; j++)
			if (j+i >n-1 ) 
				s+=a[i][j];
	printf("TBC = %.2f", s/d1);
	
	return 0;
}

