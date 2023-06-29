#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	float a[n];
	for (int i=1; i<=n; i++)
    {
	    printf ("Nhap a[%d] = ", i);
	    scanf ("%f", &a[i]);
	}		
	for (int i=1; i<=n; i++)
	printf ("%.2f", a[i]);
}
