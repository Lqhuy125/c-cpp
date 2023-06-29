#include <stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int a[n+1];
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n;i++)
	{
		int d=0;
		for (int j = 1; j<=a[i];j++)
		{
			if (a[i]%j==0) d++;
		}
		if (d==2) printf("%d ", a[i]);
	}
}

