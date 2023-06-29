#include <stdio.h>
#include <limits.h>
void max(int a[100], int n)
{
	int max = INT_MIN;
	for (int i = 0; i<n; i++)
	{
		if (a[i]>max) max = a[i];
	}
}
void min(int a[100], int n)
{
	int min = INT_MAX;
	for (int i = 0; i<n; i++)
	{
		if (a[i]<min) min = a[i];
	}
}
void sapxeptang(int a[100], int n)
{
	for (int i = 0; i<n-1; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if (a[j]<a[i])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main ()
{	
	int n, a[100];
	scanf("%ld", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	sapxeptang(a,n);
	for(int i = 0; i<n; i++)
	{
		if (a[i]%3 == 0) 
		{
			max(a,n); 
			min(a,n); 
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	for(int i = 0; i<n; i++)
	{
		if (a[i]%3==1) 
		{
			max(a,n);
			min(a,n); 
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	for(int i = 0; i<n; i++)
	{
		if (a[i]%3==2) 
		{
			max(a,n); 
			min(a,n); 
			printf("%d ", a[i]);
		}
	}
	return 0;
}

