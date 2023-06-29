#include <stdio.h>

int main ()
{
	long long n, s=0;
	scanf("%lld", &n);
	long long a[n+1];
	for (int i = 1; i<=n; i++)
	{
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i<=n; i++)
	{
		s+=(n-i+1)*a[i];
	}
	printf("%lld", s);

	return 0;
}

