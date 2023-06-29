#include<stdio.h>

int main() {
	int n, a[1000];
	int count = 0;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 2; i <= n-1; i++)
	{
		
		if (a[i]>a[i-1] && a[i]>a[i+1]) count++;
	}
	printf("%d", count);
	return 0;
}

