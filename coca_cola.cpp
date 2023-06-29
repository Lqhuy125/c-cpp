#include <stdio.h>

int main()
{	
	int x,y,chai,nap,s;
	scanf("%d%d",&x, &y);
	s = chai = nap = x;
	if(y==1) s = x*2;
	else {
    	while (nap >= y)
    	{
    		chai = nap/y;
    		nap = chai + nap%y;
    		s += chai;
    	}
	}
	printf("%d", s);
}
