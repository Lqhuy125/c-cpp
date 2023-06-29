#include<stdio.h>  
#include <math.h>
int main ()
{
    int n, i, j;
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2*n - 1; j++) // vd n = 3 thì có 3 dòng: dòng 1 có 1 số, dòng 2 có 3 số, dòng 3 có 5 số => số dòng lớn nhất là 5 dòng = 2*dong - 1
        {
            if (abs(n - j) <= (i - 1))
            {
                printf(" %d ", i - abs(n - j));
            } else 
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}