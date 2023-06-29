#include <stdio.h>
int main ()
{
    int n;
    int a[100];

    do 
    {   printf("Nhap n = ( 1 <= n <= 100)");
        scanf("%d", &n);
    } while (n>100 || n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i<n; i++)
    {
        printf(" %d ", a[i]);
    }

    int tong = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {   sum++;
        tong += a[i];
    }
        printf("%d", tong/sum);
}