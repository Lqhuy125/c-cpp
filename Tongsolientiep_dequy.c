//  Tính S = 1 + 2 + 3 + … + n
#include <stdio.h>

int tong(int n)
{
    if (n == 0) return 0;
    else
        return n + tong(n-1);
}
int main()
{   int n;
    scanf("%d", &n);
    printf("Tong = %d", tong(n));
}