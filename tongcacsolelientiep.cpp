#include <stdio.h>

int main ()
{
	int x,y,a,b,t=0;
	scanf("%d%d", &a,&b);
	x = a>b?b:a;
	y = a>b?a:b;
	
	for (int i = x+1; i<y; i++)
	{
		if (i%2!=0)
		{
			t += i;
		}
	}
	printf("%d", t);
}

