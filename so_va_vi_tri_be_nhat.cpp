#include <stdio.h>
#include <limits.h>
int main ()
{
	int n,a[1000],i;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int min = INT_MAX;
	for (i = 0; i<n; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
		}
	}
	for (i = 0; i<n; i++)
	{
		if (a[i] == min){
			printf("Menor valor: %d\nPosicao: %d", min,i);
			break;
		}
	}
	return 0;
}

