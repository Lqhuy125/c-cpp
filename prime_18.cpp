#include <stdio.h>

int main ()
{
	int t;
	scanf("%d", &t);
	long long a[t], b[t], m[t], n[t], count[t];
	for (int i = 1; i<=t; i++)
	{
		scanf("%lld%lld", &m[i], &n[i]);
		scanf("%lld%lld", &a[i], &b[i]);
	}
	for (int i =1; i<=t; i++)
	{
		count[i] = 0;
		for (int j = m[i]; j <=n[i]; j++)
		{
			if(j % a[i]==0 || j % b[i]==0) count[i]++;
			
		}
	}
	for (int i = 1; i<=t; i++)
	{
		printf("%lld\n", count[i]);
	}
	return 0;
}

