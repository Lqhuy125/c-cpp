#include <stdio.h>
void sapxepgiam(int a[1000], int n)
{
	int temp;
	for(int i = 0; i<n-1; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			if (a[j] > a[i])
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
	long n,c, a[1000],x;
	scanf("%ld%ld", &n,&c);
	for (int i = 0; i<n; i++)
	{
		scanf("%ld", &a[i]);
	}
	sapxepgiam(a,n);
	int tong = 0; 
	for (int i = 0; i<n; i++)
	{
		tong = tong + a[i];
		x = i;
		if (tong>c) break;
	}
	printf("%ld", tong-a[x]);
}

