#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
int main ()
{
	int x[100],y[100],n;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &x[i],&y[i]);
	}
	int so_duong=n*(n-1)/2;
	printf("So duong thang duoc tao tu %d diem la: %d", n,so_duong );
}


