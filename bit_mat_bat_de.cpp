#include<stdio.h>
 
int result(int n, int k)
{
    if (n == 1)
        return 1;
    else
        
        return (result(n - 1, k) + k - 1) % n + 1;
}
 

int main()
{
    int n, k;
    scanf("%d%d",&n,&k);
    printf("%d",result(n, k)); 
    return 0;
}

