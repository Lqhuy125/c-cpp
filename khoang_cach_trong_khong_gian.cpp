#include <stdio.h>
#include <math.h>
int main ()
{
	double a1,a2,a3,b1,b2,b3,c1,c2,c3,bc;
	scanf("%d%d%d",&a1, &a2, &a3);
	scanf("%d%d%d",&b1, &b2, &b3);
	scanf("%d%d%d",&c1, &c2, &c3);
	printf("%lf", pow((c1-b1),2) );
	bc = sqrt( (c1-b1)*(c1-b1) + (c2-b2)*(c2-b2) + (c3-b3)*(c3-b3) );
	printf("%lf", bc);
//	d1 = (b2-a2)*(c3-b3) - (c2-b2)*(b3-a3);
//	d2 = (b3-a3)*(c1-b1) - (c3-b3)*(b1-a1);
//	d3 = (b1-a1)*(c2-b2) - (c1-b1)*(b2-a2);
//	ab = sqrt( pow(d1,2) + pow(d2,2) + pow(d3,2));
//	d = ab/bc;
//	printf("%lf", d);
	
}

