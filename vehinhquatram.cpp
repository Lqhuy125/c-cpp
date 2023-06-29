#include <stdio.h>

int main()
{
	int n,i,j;
	scanf("%d", &n);
	for ( i = 0; i <n; i++)
	{
		for (j = 0; j<2*n-1; j++)
		{
			if (j == n-i-1 || j == n+i-1) printf("* ");
			else printf(" ");
		}
		printf("\n");
	}
//	for (i = n; i<2*n-1; i++)
//	{
//		for (j = 0; j< 2*n-1; j++)
//		{
//			if (j == i-n+1 || j == 3*n-i-3) printf("* ");
//			else printf(" ");
//		}
//		printf("\n");
//	}
}
