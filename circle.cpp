#include <stdio.h>
#include <math.h>
int main ()
{
	float r;
	scanf("%f", &r);
	if (r < 0) printf("NO CIRCLE");
	else 
	{
		printf("%.2f\n%.2f", 2*3.141592*r,3.141592*r*r);
	}
	
}

