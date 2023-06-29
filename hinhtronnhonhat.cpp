#include <stdio.h>
#include <math.h>
#define pi 3.141592654
int main ()
{	float xa,xb,xc,ya,yb,yc;
	scanf("%f%f%f%f%f%f", &xa,&ya,&xb,&yb,&xc,&yc);
	float rmax = sqrt(pow(xa,2)+pow(ya,2));
	if (sqrt(pow(xb,2)+pow(yb,2)) > rmax) 
	{
		rmax = sqrt(pow(xb,2)+pow(yb,2));
	} else if (rmax < sqrt(pow(xc,2)+pow(yc,2)))
	{
		rmax = sqrt(pow(xc,2)+pow(yc,2));
	}
	
	float s = pi*pow(rmax, 2);
	printf("%.6f", s);

}

