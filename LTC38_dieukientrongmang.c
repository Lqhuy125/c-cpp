#include <stdio.h>

int Dieukien(int n)
{
    if (n<=1)
    {
        return 0;
    }
    for(int i = 2; i < n;i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    int a[100];
    do
    {
        printf("Nhap vao so luong phan tu: ");
        scanf("%d", &n);
    } while (n> 100 || n < 0);

    for (int i = 0; i<n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (Dieukien(a[i]))
        printf("%d ", a[i]);
    }
}
