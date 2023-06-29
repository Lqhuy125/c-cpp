#include <stdio.h>
int giaithua( int n)
{   if ( n == 1 || n == 0)
        return 1;
    else 
        return n*giaithua(n-1);
}
int main ()
{
    int n,gt;
    do {
        scanf("%d", &n);
    } while (n<0);
    gt = giaithua(n);
    printf("%d! = %d", n, gt);
}