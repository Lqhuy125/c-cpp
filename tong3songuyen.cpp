#include <stdio.h>

int main ()
{
	
	int n,s;
	int count = 0;
	int x,y,z;
	scanf("%d%d", &n, &s);
	
	while ((x+y == s) || (x+z == s) || (y+z==s) || (x == s) || (y == s) || (z == s))
	{
		count++;
		x++;
	}
	printf("%d", count);
	return 0;
}

