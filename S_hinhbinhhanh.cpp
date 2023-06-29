#include <stdio.h>
#define pi 3.141592654
#include <math.h>
int main ()
{
	float a,b,h,n,s;
	
	scanf("%f%f", &a,&b);
	scanf("%f", &n);
	h = b*sin((pi*n)/180);
	s=h*a;
	printf("%.3f", s);
}

