#include <stdio.h>
int tinhtong(int n)
{   int kq;
    if (n == 1)
    {
        return 1;
    } else {
        return kq = n + tinhtong(n-1);
    }
}
int main(){
    int n, ketqua;
    scanf("%d", &n);
    ketqua = tinhtong(n);
    printf(" %d ", ketqua);
}