#include <stdio.h>
#include <math.h>

int kiemtrasnt(int n)
	{
		if (n <= 1)
			 return 0;
			 
		for (int i = 2; i <= n - 1; i++)
		{
			if ( n % i == 0) 
			 return 0;
		}
	return 1;
	}
int main ()
	{
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n; i++)
	{
		int kt = kiemtrasnt(a[i]);
		if ( kt != 0)
			printf("%d", &a[i]);
	}
}

