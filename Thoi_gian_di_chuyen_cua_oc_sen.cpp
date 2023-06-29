#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(n==0)
        printf("ERROR!");
    if(n!=0)
    {
        int h=n+k/n+(k-n);
        if(k%n==0)
            printf("%d",h-1);
        if(k%n!=0)
            printf("%d",h);
    }
    return 0;
}

