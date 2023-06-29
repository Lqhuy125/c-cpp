#include <stdio.h>
	
int main (){
	long long  n;
	scanf("%lld", &n);
	
		for (long long i = 2; i*i<=n; i++)
		{	
			while ((n%(i*i))==0) n/=i;
		}
		printf("%lld", n);
}
