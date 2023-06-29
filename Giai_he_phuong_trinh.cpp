#include <stdio.h>
#include <math.h>
int main ()
{
	double a1,a2,b1,b2,c1,c2;
	double d,dx,dy,x,y;
	scanf("%lf%lf%lf%lf%lf%lf", &a1,&b1,&c1,&a2,&b2,&c2);
	d = a1*b2 - a2*b1;
	dx = -(b1*c2 - b2*c1);
	dy = a1*c2 - a2*c1;
	if (d==0) 
	{
		if (dx==0 && dy==0) printf("VOSONGHIEM");
		else if (dx != 0 || dy !=0) printf("VONGHIEM");
	}
	else
	{
		x = dx/d;
		y = dy/d;
		if (x == -0.00) x = fabs(x);
		if (y == -0.00) y = fabs(y);
		printf("%.2lf %.2lf", x, y);
	}

	return 0;
}

