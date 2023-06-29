#include<stdio.h>

int main()
{
	int n, dem = 0;
	scanf("%d", &n);
	for (int i = 0; i<n;i++)
	{
		if((i + i++ + i++) == n)
		dem++;
	}
	printf("%d", dem);
	return 0;
}
