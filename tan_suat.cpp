#include <stdio.h>
#include <limits.h>

int main ()
{
	int n, max = INT_MIN, a[100];
	int b[9999];
	scanf("%d", &n);
	
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<2000; i++) b[i] = 0;
	for (int i = 0; i<n; i++)
	{
		b[a[i]]++;
	}
	for (int i = 0; i<2000; i++)
	{
		if (b[i] > 0)
		{
			printf("%d xuat hien %d lan\n", i,b[i]);
		}
	}

	return 0;
}

