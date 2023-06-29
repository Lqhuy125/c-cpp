#include <stdio.h>

int main ()
{
	int a[100], b[100], x[100], y[100], t[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf ("%d%d", &a[i], &b[i]);
	}
	
	for (int i = 0; i<n; i++)
	{	t[i] = 0;
		x[i] = a[i]>b[i]?b[i]:a[i];
		y[i] = a[i]>b[i]?a[i]:b[i];
		for (int j = x[i]+1; j<y[i]; j++)
		{
			if (j%2!=0)
			{
				t[i] += j;
			}
		}
	}
	for (int i = 0; i<n; i++)
	{
		printf ("%d\n", t[i]);
	}
}

