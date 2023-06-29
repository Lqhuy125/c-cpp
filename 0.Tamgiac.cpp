#include <stdio.h>

int kt(int x, int y, int z)
{
	if (x+y>z && y+z>x && x+z>y) return 1;
	else return 0;
}
int main ()
{
	int a,b,c,d;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	if ((kt(a,b,c) || kt(a,c,d) || kt(a,b,d) || kt(b,c,d))==1) printf("S");
	else printf("N");

	return 0;
}

