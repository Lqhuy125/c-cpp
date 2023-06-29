#include <stdio.h>

int main ()
{
	int t,a[6], d=0;
	scanf("%d", &t);
	for (int i = 0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<5; i++)
	{
		if (a[i] == t ) d++;
	}
	printf("%d", d);
	return 0;
}

