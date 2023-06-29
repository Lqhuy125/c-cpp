#include <stdio.h>

int Min(int a[], int n)
{   
    int min = a[0];
    for(int i = 1; i < n;i++)
    {
        if ( min > a[i])
        {
            min = a[i];
        }
    } 
    return min;
}

int Max(int a[], int n)
{   
    int max = a[0];
    for(int i = 1; i < n;i++)
    {
        if ( max < a[i])
        {
            max = a[i];
        }
    }
    return max;
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
   
       
        printf("min = %d ", Min(a,n));
        printf(" max = %d ",Max(a,n));
   
}
