#include <stdio.h>

int main ()
{
	int n; 
	scanf("%d", &n);
	while (n--)
	{
		long long  x,y,a,b,p = 1;
		scanf("%lld%lld", &a,&b);
		for (int i = 1; i< 20; i++)
		{
			p *= 10;
			x = a/p;
			y = a%p;
			if (x*y==b) { printf("%lld %lld\n", x,y); break;}
		}
	}

	return 0;
}

