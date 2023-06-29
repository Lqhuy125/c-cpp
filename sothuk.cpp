#include <stdio.h>

int main ()
{
	int n,k, i=1, y=0;
	scanf("%d%d", &n, &k);
	while (y!=k)
	{
		if (i%n!=0) 
		y++;
		if (y==k) break;
		i++;
	}
	printf("%lld", i);

}

