#include <stdio.h>

int main ()
{
	int n, a[100], k, m;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d%d", &k,&m); // chen vao vi tri k va gia tri m
	n++;
	for (int i = n-1; i>k; i--)
	{
		a[i] = a[i-1];
	}
	a[k] = m;
	for (int i = 0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

