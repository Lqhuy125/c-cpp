#include <stdio.h>

int n, count1=0, count=0;

int tang(int a[1000], int n)
{
	for (int i = 0; i<n-1; i++)
	{
		if (a[i] < a[i+1]) count++;
	}
	return count;
}
int giam(int a[1000], int n)
{
	for (int i = 0; i<n-1; i++)
	{
		if (a[i] > a[i+1]) count1++;
	}
	return count1;
}
int main ()
{
	scanf("%d", &n);
	int a[n+1];
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	if (tang(a,n) ==n-1 || giam(a,n) ==n-1) printf("YES");
	else printf("NO");

	return 0;
}

