#include <stdio.h>

int main (){
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	
	if (b > a && b > c)
	{
		printf("Max = %d", b);
	} else if ( c > b && c > a)
	{
		printf("Max = %d", c);
	} else if(a>b && a>c) 
	{
		printf("Max = %d", a);
	}
	return 0;

}

