#include <stdio.h>

int main()
{
	long long n,x,count=0;
	scanf("%lld", &n);
    for (long long i = 1; i<=n; i++) 
	{
		x=i;
        while(x!=0)
  		{
    		count+=1;
    		x=x/10;
  		}
    }
    printf("%lld", count); 
}
