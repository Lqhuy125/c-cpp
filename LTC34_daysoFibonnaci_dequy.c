#include <stdio.h>

int daysoFibonnaci(int n)
{
    if ( n == 0)
    {
        return 0;
    }else if (n == 1)
    {
        return 1;
    } else 
    {
        return daysoFibonnaci(n - 1) + daysoFibonnaci(n - 2);
    }
}
int main (){
    int n;
    scanf("%d", &n);
    printf("%d", daysoFibonnaci(n));
}