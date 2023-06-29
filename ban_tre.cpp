#include <stdio.h>

int main ()
{
	int n,k, d=0;
	scanf("%d%d", &n,&k);
	int a[n+1];
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
		while (a[i]>=k)
		{
			a[i]-=k;
			d++;
		}
	}
	printf("%d", 3*k*d);
	return 0;
}

