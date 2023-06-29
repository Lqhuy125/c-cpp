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
        if (a[i]==0) continue;
		if (a[i]%2==0)
        {
            s1+=a[i];
            d1++;
        }
        if (a[i]%2!=0)
        {
            s2+=a[i];
            d2++;
        }
    }
    if(s1==0 && s2==0) printf("0\n0");
    if (s1==0 && s2!=0) printf("%d\n0",s2/d2);
    if (s1!=0 && s2==0) printf("0\n%d", s1/d1);
    if (s1!=0 && s2!=0) printf("%d\n%d", s2/d2, s1/d1);
    
}
