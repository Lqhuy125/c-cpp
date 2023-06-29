#include <stdio.h>

int main ()
{
	double a[100], tong = 0;
	int count = 0;
	for(int i = 0; i<6; i++)
	{
		scanf("%lf", &a[i]);
		if (a[i] > 0)
		{
			tong = tong + a[i];
			count++;
		}
	}
	if (count == 0)
	{
		printf("%d Gia tri duong", count);
		printf("\n0.0");
	}else{
	printf("%d Gia tri duong", count);
	printf("\n%.1lf", tong/count);
	}
}

