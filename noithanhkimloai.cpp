#include <stdio.h>
int n, a[100];

void sapxeptang(int a[100], int n)
{
	int temp;
	for (int i = 0; i<n-1; i++)
	{
		for (int j = i +1; j<n; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main ()
{
	int tong = 0, tong1;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	sapxeptang(a,n);
	for (int i = 0; i<n-1;i++)
	{
		tong = tong + a[i] + a[i+1];
	}
	printf("%d", tong+a[0]);
	return 0;
}

