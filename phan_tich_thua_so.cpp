#include <stdio.h>

int main ()
{
	int n,count = 0;
	scanf("%d", &n);
	for (int i = 2; i<=n;i++)
	{
		int dem = 0;
		while(n%i == 0)
		{
			dem++;
			n/=i;
		}
		if (dem >= 1) printf("%d %d\n", i, dem); 
	}
}

