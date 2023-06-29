#include <stdio.h>
int a[100], n;

void sapXepTangvitrile(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		int tang;
		for(int j=i; j<n; j++)
		{
			if (i%2!=0 && j%2!=0)
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
	sapXepTangvitrile(a,n);
	xuatmang(a,n);   
}
