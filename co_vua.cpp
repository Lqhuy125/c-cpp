#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
	int n, dem=0;
	scanf("%d", &n);
	char a[n+1];
	for (int i = 0; i<n; i++)
	{
		scanf("\n%c", &a[i]);
		if (a[i] == 't') dem++;
		if (a[i] == 'M') dem+=3;
		if (a[i] == 'T') dem+=3;
		if (a[i] == 'X') dem+=5;
		if (a[i] == 'H') dem+=9;
		if (a[i] == 'V') dem+=0;
	}
	printf("%d", dem);
}

