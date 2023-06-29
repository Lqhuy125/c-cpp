#include <stdio.h>
void robot(long a[100],long b[100],long c[100], long n)
{
	for (int i = 0; i<n;i++)
	{
		for (int j = a[i]; j<b[i]; j++) c[j] = 1;
	}
}
int main()
{	
	long a[100],b[100],c[100];
	long n,m;
	scanf("%ld%ld", &n,&m);
	for(int i = 0; i<n;i++)
	{
		scanf("%ld%ld", &a[i], &b[i]);
	}
	for (int j = 0; j<=m;j++)
	{
		c[j] = 0;
		robot(a,b,c,n); 
	}

	int count = 0;
	for (int i = 0; i<m;i++)
	{
		if (c[i] == 0) count++;
	}
	printf("%d", count);
}
