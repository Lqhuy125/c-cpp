#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
	int a,b,c;
	float x,y;
	scanf("%d%d%d", &a,&b,&c);
	y= (float)(c-b*3)/(a+a+(a-1));
	x=y*a+b;
	printf("%.f\n%.f", x,y);
}


