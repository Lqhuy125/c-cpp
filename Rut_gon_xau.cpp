#include <stdio.h>
#include <string.h>

int main ()
{
	int n;
	scanf("%d", &n);
	char a[n];
	scanf("%s", &a);
	printf("%c", a[0]);
	for (int i = 1; i<n; i++)
	{
		if (a[i-1] != a[i])	
			printf("%c", a[i]);
	}
}

