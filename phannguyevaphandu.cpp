#include <stdio.h>

int main ()
{
	long long x,y;
	scanf("%lld%lld", &x,&y);
	long long d = 0;
	for (long long i = 3; i<=x; i++)
	{
		for (long long j = 2; j<=y; j++)
		{
			if ((i/j)== (i%j))d++;
		}
	}
	printf("%lld", d);
	
}

