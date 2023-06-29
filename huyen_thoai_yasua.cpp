#include <stdio.h>
#include <math.h>

int main ()
{
	int n, d=0;
	scanf("%d", &n);
	int a[n+1];
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n-2;)
	{
		if (a[i]==a[i+1] && a[i]==1 && (a[i+2]==0 || a[i+2]==1))
		{
			dem++;
			
		}
	}
	printf("%d", d);
}

