#include <stdio.h>
int main()
{
    int n, d1=0,d2=0,s1=0,s2=0;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i<n; i++)
    {
        if (a[i]%2==0 && a[i]!=0)
        {
            s1+=a[i];
            d1++;
        }
        else if ((a[i]%2!=0 && a[i]!=0))
        {
            s2+=a[i];
            d2++;
        }
    }
    if(s1==0 && d1==0)
    {
        printf("0\n");
    }else if (s2==0 && d2 ==0)
    {
        printf("0\n");
    }
    else 
    {
        printf("%d\n%d", s2/d2, s1/d1);
    }
    
}

