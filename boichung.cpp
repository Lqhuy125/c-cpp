#include <stdio.h>

int main ()
{
	long long n,t;
	scanf("%lld", &n);
	if (n%2!=0) t = n*(n-1)*(n-2);
	else 
	{
		if (n%3==0) t = (n-1)*(n-2)*(n-3);
		else t = n*(n-1)*(n-3);
	}
	printf("%lld", t);

	return 0;
}

