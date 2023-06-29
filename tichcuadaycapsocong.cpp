#include <stdio.h>

int main (){
	int n, k;
	long long giaithua = 1;

		scanf("%d%d", &n, &k);
	
	if (n % k == 0)
	{
		for (int i = k; i<=n; i += k)
		{	
			giaithua = giaithua * i;
		}
	}else 
	{
		for (int i = n % k; i<=n; i += k)
		{	
			giaithua = giaithua * i;
		}
	}
	printf("%lli", giaithua);
}
