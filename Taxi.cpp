#include <stdio.h>
#include <math.h>
int main ()
{
    int d1 =0, d2 =0, d3 =0, d4 =0,n;
    scanf("%d", &n);
    int a[n];
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] == 1) d1++;
		if (a[i] == 2) d2++;
		if (a[i] == 3) d3++;
		if (a[i] == 4) d4++;
	}
	int xe = 0;
	if (d3>=d1)
	{
		xe = d3 + d4 + d2/2 + d2%2;
	}else
	{
		int a = d1 - d3 + d2%2; // d1-d3 = so nhom co 1 nguoi du
								// d2%2 = so nhom con 2 du 
		if (a%4==0)
		{
			xe = d3 + d4 + d2/2 + a/4;
		}else 
		{
			xe = d3 + d4 + d2/2 + a/4 + 1;
		}	
	}
	printf("%d", xe);
	return 0;
}
