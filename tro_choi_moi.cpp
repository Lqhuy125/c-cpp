#include <stdio.h>

int dem(int a[100], int n)
{
	int d = 0;
	for (int i=0; i<n; i++)
	{
		if (a[i]==1) d++;
	}
	return d;
}
int main ()
{
	int n, d=0;
	scanf("%d", &n);
	int a[n+1], b[n+1];
	int max = 0;
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = i; j<n; j++)
		{
			if (a[j]==1) a[j] = 0;
			else a[j] = 1;
			if (max<dem(a,n))
			{
				max = dem(a,n);
			}
		}
		for (int k = 0; k<n; k++)
		{
			a[k] = b[k];
		}
	}
	printf("%d", max);
	return 0;
}

