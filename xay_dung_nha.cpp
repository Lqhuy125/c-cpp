#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c;
	do 
	{
		scanf("%d%d%d", &a,&b,&c);
		if (a==0) break;
		printf("%d\n", (int)sqrt((a*b*100)/c));
	}while (a!=0 && b!=0 && c!=0);
}

