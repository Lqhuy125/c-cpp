#include <stdio.h>
#include <math.h>
int main ()
{
	float a,b,s;
	scanf ("%f%f", &a,&b);
	s = ((b-a)/2) * ((a+b)/2);
	printf("%.2f", fabs(s));
	return 0;
}

