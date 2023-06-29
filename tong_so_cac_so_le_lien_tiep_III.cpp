#include <stdio.h>

int main ()
{
	int n,x;
	scanf("%d", &n);
	int a[n+1],b[n+1];
	for (int i = 1; i<=n; i++)
	{
		scanf("%d%d", &a[i],&b[i]);
	}
	for (int i = 1; i<=n; i++)
	{
		int s = 0;
		x = (a[i]%2==0)?a[i]+1:a[i];
		while (b[i]--)
		{
			s+=x;
			x+=2;
		}
		printf("%d\n", s);
	}
	return 0;
}

