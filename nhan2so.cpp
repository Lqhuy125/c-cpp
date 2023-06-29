#include <stdio.h>

int main ()
{
	int n, a[100], b[100];
	scanf("%d", &n);
	
	for (int i = 0; i<n; i++)
	{
		scanf("%d%d", &a[i],&b[i]);
	}
		printf("%d %d", a[0]/100, b[0]/(a[0]/100));
		printf("\n");
		printf("%d %d", a[1]/10, b[1]/(a[1]/10));
}

