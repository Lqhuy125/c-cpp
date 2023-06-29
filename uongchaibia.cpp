#include <stdio.h>

int main()
{	
	long t,n,m,k;
	long chai,nap,s;
	scanf("%d", &t);
	for (int i = 0; i<t;i++)
	{
		scanf("%ld%ld%ld", &n, &m, &k);
		s = chai = nap = n/m;
		while (nap >= k)
		{
			chai = nap/k;
			nap = chai + nap%k;
			s = s + chai;
		}
		printf("%ld\n", s);
	}
}

