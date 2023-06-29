#include <stdio.h>
void nhiphan(long long n)
{
    if (n==0) return ;
    else
    {
        long long du = n%2;
        nhiphan(n/2);
        printf("%lld", du);
    }
}
int main()
{
    long n;
	long long a[10000];
    scanf("%d", &n);
    for (long i = 0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (long i = 0; i<n; i++)
    {
        nhiphan(a[i]);
        printf("\n");
    }
}
