#include <stdio.h>

int main ()
{
	int n, a[100],temp;
	int b[100];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int h = 0;
	for (int i = 0; i<n-1; i++)
	{	
		for (int j = i+1; j<n; j++)
		{
			if (a[j]<a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			temp = b[h];
			h++;
		}
}
		printf("%d ", b[h]);
	
}

