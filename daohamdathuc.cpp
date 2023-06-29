#include <stdio.h>
#include <math.h>

int main (){
	int n, x,a[100];
	float p = 0;
	scanf("%d", &n);
	for (int i = 0; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	for(int i = 1; i<=n; i++)
	{
		p += a[i]*i*pow(x,(i-1));
	}
	printf("%.3f", p);
}

