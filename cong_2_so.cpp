#include <stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int a[n+1],b[n+1];
	for (int i = 1; i<=n; i++)
	{
		scanf("%d%d", &a[i],&b[i]);
	}
	for (int i = 1; i<=n; i++)
	{
		printf("%d\n", a[i]+b[i]);
	}
	return 0;
}

