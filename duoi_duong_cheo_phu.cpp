#include <stdio.h>

int main ()
{
	double M[12][12], s=0;
	char x;
	scanf("%c", &x);
	for (int i = 0; i<12; i++)
	{
		for (int j = 0; j<12; j++)
		{
			scanf("%lf", &M[i][j]);
		}
	}
	for (int i = 0; i<12; i++)
	{
		for (int j = 0; j<12; j++)
		{
			if (i+j >= 12) s+=M[i][j];
		}
	}
	if (x=='S') printf("%.1f", s);
	if(x=='M') printf("%.1f", 1.0*s/66);
}

