//  Tính S = 1 + 2 + 3 + … + n
#include <stdio.h>
#include <math.h>

int tinh_x_mu_n(int n, int x)
{
    if (n == 0) return 1;
    else
        return x*pow(x,n-1);
}
int main()
{   int n,x;
    scanf("%d%d",&x,&n);
    printf("%d", tinh_x_mu_n(n, x));
}