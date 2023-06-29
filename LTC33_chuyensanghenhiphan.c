#include <stdio.h>

void nhiphan(int n)
{
    if (n==0)
    {
        return;
    }else
    {
        int chia = n % 2;
        nhiphan( n / 2);
        printf("%d", chia);
    }
}

int main(){
    int n;
    do {
    scanf("%d", &n);
    } while (n < 0);
    nhiphan(n);
}