#include <stdio.h>
float trungbinhcong(int n, int a[])
{   int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    
    return (float)tong/n;
}

float trungbinhcongsoduong(int n, int a[])
{   int tong = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {   if (a[i] > 0)
        {
            tong += a[i];
            sum++;
        }
    }
    return (float)tong/sum;
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
    printf("Trungbinhcong = %.2f", trungbinhcong(n,a));
    printf("\nTrungbinhcongsoduong = %.2f", trungbinhcongsoduong(n,a));
}
