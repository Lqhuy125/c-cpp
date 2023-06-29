#include <stdio.h>
void ktra(int m)
{
	int b[1000];

	int y = 0;
	while(m>0)
	{
		b[y] = m%3;
		m = m / 3;
		y++;
	}
	for (int j = y-1; j>=0; j--)
	{
		printf("%d", b[j]);
	}
}
int main ()
{
	int n,y;
	scanf("%d", &n);
	int a[n+1], b[n+1];
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n; i++)
	{
		ktra(a[i]);
		printf("\n"); 
	}
	
	
	
		
}

