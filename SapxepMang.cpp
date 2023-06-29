#include <stdio.h>

int sapxeptang(int a[], int n)
{
    int sapxep ;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                sapxep = a[i];
                a[i] = a[j];
                a[j] = sapxep;
            }
        }
    }
}
int sapxepgiam(int a[], int n)
{
    int sapxep ;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                sapxep = a[i];
                a[i] = a[j];
                a[j] = sapxep;
            }
        }
    }
}

void Xuatmang(int a[], int n)
{
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
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
    printf("Mang da nhap la ");
    for (int i = 0; i<n; i++)
    {   
        printf("%d ", a[i]);
    }
    printf("Mang nhap theo thu tu tang dan la ");
    sapxeptang(a, n);
    Xuatmang(a, n);

    printf("Mang nhap theo thu tu giam dan la ");
    sapxepgiam(a, n);
    Xuatmang(a, n);
}


    