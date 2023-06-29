#include <stdio.h>

int main ()
{
	int a,b;
	scanf("%d%d", &a,&b);

	for (int i=b+1; i<=10000; i++)
	{
		if (i % a == 0)
		{
			printf("%d", i);
			return 0;
		}
		
	}
}

