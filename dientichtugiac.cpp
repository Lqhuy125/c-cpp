
#include<stdio.h>
#include<math.h>

int main(){
	float xa, xb, xc, xd, ya, yb, yc, yd;
	scanf("%f%f%f%f", &xa, &xb, &ya, &yb);
	scanf("%f%f%f%f", &xc, &xd, &yc, &yd);	
	float S1 = 1.0/2 * fabs((xb - xa)*(yc - ya)-(xc - xa)*(yb - ya));
	float S2 = 1.0/2 * fabs((xd - xa)*(yc - ya)-(xc - xa)*(yd - ya));
	printf("%.3f", S1 + S2);
return 0;
}


