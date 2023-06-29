#include <stdio.h> // sap xep cac SNT tang nhung giu nguyen so hang 
#include <math.h>
int a[100], n;
int kiemtraSNT(int n)
{
	int dem = 0;
	if (n<=1)
		return -99;
	else 
	{
		for(int i = 2; i<=sqrt(n); i++)
		{
			if (n%2==0) dem++;
		}
		if (dem == 0) return n;
		else return -99;
	}
}
void sapXepSNTtang(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		int tang;
		for(int j=i; j<n; j++)
		{
			if (x[i] == kiemtraSNT(x[i]) && x[j] == kiemtraSNT(x[j]) )
			{
				if(x[j] < x[i])
				{
					tang = x[i];
					x[i] = x[j];
					x[j] = tang;
				}
			}
			
		}
	}
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
int main()
{
	scanf("%d", &n);
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\n"); 
	sapXepSNTtang (a,n);
	xuatmang(a,n);   
}
