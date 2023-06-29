#include <stdio.h>
#include <math.h>

int kiemtrasnt(int n)
	{
		if (n <= 1)
			 return 0;
			 
		for (int j = 2; j < n; j++)
		{
			if ( n % j == 0) 
			 return 0;
		}
	return 1;
	
	}
	
int main ()
	{
	int n;
	do 
	{
		scanf("%d", &n);
	} while (n<1);

	for (int i=2; i <= n; i++)
			{
				if (kiemtrasnt(i))
					{
						printf(" %d ", i);
					}
			}
	}
