#include <stdio.h>
#include <math.h>
int main ()
{
	int n, s = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i<=n-1; i++)
	{
		for(int j = i+1; j<=n; j++)
		{
			s += abs(a[i] - a[j]);
		}
	}
	printf("%d", s);
	return 0;
}

