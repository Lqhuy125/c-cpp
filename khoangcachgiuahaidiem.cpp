#include <stdio.h>
#include <math.h>
	float a[100][100];
int main ()
{   float d;
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            d = sqrt ( pow( a[1][0] - a[0][0] , 2) + pow(a[1][1] - a[0][1] , 2) );
        }
    }
    printf("%.4f", d);
}
