#include <stdio.h>
#include <string.h>

int main ()
{
	char a[100];
	scanf("%s", &a);
	int max = a[0];
	for (int i = 0; i<strlen(a); i++)
	{
		if (a[i] > max) max = a[i];
	}
	printf("%d", max);
	return 0;
}

