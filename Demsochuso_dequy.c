#include <stdio.h>
int dem(int n)
{
    if ( n < 0 )
    {
        return dem( -n);
    } else if ( n < 10 && n >= 0)
    {
        return 1;
    }else {
        return dem( n/10) + 1;
    }
}
int main ()
{
    int n;
    scanf("%d", &n);
    printf("%d", dem(n));
}