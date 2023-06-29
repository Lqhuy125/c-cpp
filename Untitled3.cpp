#include<stdio.h>

int main()
{
	int n, a[100],b[100];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i<n;i++)
	{
		for (int j = i; j<n;j++)
		{
			if (a[i] == a[j]) b[i]++;
		}
	}
	int max = b[0];
	for (int i = 0; i<n; i++)
	{
		
		if (b[i] > max) max = b[i];
	}
	for (int i = 0; i<n; i++)
	{
		if (b[i] == max) 
			printf("%d", a[i]);
	}
}
