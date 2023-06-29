#include <stdio.h>
int main()
{
    long long n, s;
    scanf("%lld", &n);
    if (n<50) s = n*100;
    else if (n>=50 && n<1000) s = n*500;
    else if (n>=1000 && n<10000) s = n*1000;
    else s = n*1200;
    printf("%lld", s);
}

