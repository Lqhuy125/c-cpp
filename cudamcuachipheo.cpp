#include <stdio.h>

int main ()
{
	int a[101];
	int count = 0;
	int x;
	scanf("%d", &x);
	a[1] = 1;
	a[0] = 0;
	
	for (int i = 1; i<=x;i++)
	{
		a[i] = a[i-1] + i;
		if (a[i] <= x)
		count++;
		x = x - a[i];
	}
	printf("%d", count);
}

