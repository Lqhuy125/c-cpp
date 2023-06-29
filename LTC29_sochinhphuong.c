#include <stdio.h>
#include <math.h>

int kiemtrasochinhphuong(int n)
{
    int khaican = (int)sqrt(n);
    if (pow(khaican,2) == n)
    {
        return 1;
    } else
    {
        return 0;
    }
}
int main()
{   int n;
    do 
    {   
        scanf("%d", &n);
    } while (n < 0);
    for ( int i = 0; i <= n ; i++)
    {
       if (kiemtrasochinhphuong(i))
       {
        printf("%d ", i);
       }
    }
}