#include <stdio.h>
#include <math.h>

int main ()
{
	long long x[100],a[100],b[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
	 scanf("%lld%lld", &a[i], &b[i]);
	}
	for (int i = 0; i<n; i++)
	{
		x[i] = pow((a[i]*b[i]), (float)1/3);
		if (a[i]%x[i]==0 && b[i]%x[i]==0 && a[i]*b[i] == pow(x[i], 3)) printf("Yes\n");
		else printf("No\n");
	}

}

