#include <stdio.h>
#include <math.h>
int main ()
{
	int n; 
	scanf("%d", &n);
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<= 2*n-1; j++)
		{
			if (abs(n-j) <= i -1) // vd: n= 4, i = 2, j = 3 && 5 => * se tai cac vi tri o ca trong duong tam giac 
			{
				printf("* ");
			}
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}
//cach1: abs(n-j) <= i -1
//cach2: j = n-i-1 || j = n+i-1

