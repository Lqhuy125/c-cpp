#include <stdio.h>
#include <string.h>
int main ()
{
	char a[100];
	scanf("%s", &a);
	int dem = 0;
	for (int i = 1; i<strlen(a); i++)
	{
		if (a[i] == a[0]) dem++;
	}
	printf("%d", dem);
	return 0;
}

