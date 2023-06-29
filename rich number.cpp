#include <stdio.h>

int main ()
{
	int n, s=0;
	scanf("%d", &n);
	if (n<1) printf("Poor Number");
	else 
	{
		for (int i = 1; i<n; i++)
		{
			if (n%i==0) s+=i;
		}
		if (s>n) printf("Rich Number");
		else printf("Poor Number");
	}

	return 0;
}

