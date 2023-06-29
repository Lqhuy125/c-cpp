#include<stdio.h>

int main()
{
	int n,output, a[100],b[100];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i<n;i++)
	{
		int d = 0;
		for (int j = i; j<n;j++)
		{
			if (a[i] == a[j])
			d++;
			b[i] = d;
		}
	}
	int max = b[0];
	for (int i = 0; i<n; i++)
	{
		if (b[i] > max) 
			max = b[i];
	}
	for (int i = 0; i<n; i++)
		if (b[i] == max) 
			output = a[i];
			
	printf("%d", output);
}
