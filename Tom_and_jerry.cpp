#include <stdio.h>
#include <math.h>
int main ()
{
	int a,m,b;
	scanf("%d%d%d", &a,&m,&b);
	if (abs(a)-abs(m) < abs(b)-abs(m)) printf("CAT_A");
	else if (abs(a)-abs(m) > abs(b)-abs(m)) printf("CAT_B");
	else printf("The mouse has escaped");

}

