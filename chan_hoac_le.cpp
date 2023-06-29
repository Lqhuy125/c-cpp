#include <stdio.h>
int main()
{
    long long a[100000];
    int i,n;
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    i = 0;
    while (i<n)
    {
        if (a[i]==0) printf("NULL\n");
        if (a[i] > 0 && a[i] % 2 == 0) printf("EVEN POSITIVE\n");
        if (a[i] > 0 && a[i] % 2 != 0) printf("ODD POSITIVE\n");
        if (a[i] < 0 && a[i] % 2 == 0) printf("EVEN NEGATIVE\n");
        if (a[i] < 0 && a[i] % 2 != 0) printf("ODD NEGATIVE\n");
        i++;
    }
}
