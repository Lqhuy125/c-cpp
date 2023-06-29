#include <stdio.h>

int main (){
	int X,Z;
	int c = 0;
	int s = 0;
	scanf("%d", &X);
	do
	{
		scanf("%d", &Z);
	}while ( Z <= X);
	
	if (X >= 0 && Z > 0)
	{
		for(X; X<Z;X++)
		{
				c++;
				s = s + X ;
				if (s > Z )
				{	
					break;	
				}		
		} printf("%d", c);
	} else if (X<0 && Z>0)
	{
		for(X; X<Z;X++)
		{
				c++;
				s = s + X ;
				if (s > Z )
				{
					printf(" %d ", X);
				}		
		} printf(" %d ", c+1);
	} else if (X<0 && Z<0)
	{
		for(X; X<Z;X++)
		{
				c++;
				s = s + X ;
				if (s < Z )
				{	
				break;
				}		
		} printf(" %d ", 0);
	}
}

