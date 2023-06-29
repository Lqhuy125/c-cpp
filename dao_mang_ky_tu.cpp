#include <stdio.h>

int main ()
{
	int n;
	char a[100];
	scanf("%d\n", &n);
	for (int i =0; i<n; i++)
	{
		gets(a);
	}
	for (int i = 0; i<n; i++)
	{
		int tmp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tmp;
	}
	for (int i = 0; i<n; i++)
	{
		printf("%c", a[i]);
	}

	return 0;
}

