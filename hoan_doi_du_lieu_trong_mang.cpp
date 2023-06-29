#include <stdio.h>

int main ()
{
	int a[100];
	for (int i = 0; i<20; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<10; i++)
	{
		int tmp = a[i];
		a[i] = a[20-i-1];
		a[20-i-1] = tmp;
	}
	for (int i = 0; i<20; i++)
	{
		printf("N[%d] = ", i);
		printf("%d\n", a[i]);
	}

	return 0;
}

