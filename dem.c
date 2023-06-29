#include <stdio.h>

int main (){
	int x,z;
	int c = 0, s = 0;
	scanf("%d", &x);
	do
	{
		scanf("%d", &z);
	}while ( z <= x);
	
	for(x; x<z;x++)
	{	c++;
		s = s + x ;
		if (s > z )
		{
			break;	
		}		
	} printf("%d", c);
}
