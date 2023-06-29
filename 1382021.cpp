#include <stdio.h>

int main()
{
	int hang, i, j;
	int a[12][12];
	int s;
	char x;
	
	scanf("%d", &hang);
	scanf("%c", &x);
	for (int i = 0; i< 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			printf("%d", a[i][j]);
		}
	}
	for (int i = 0; i <12; i++ )
	{
		s += a[hang][i];
	}
	if ( x == 'S')
		printf("%.1f", s);
	else
		printf("%.1f", 1.0*s/12);
}

