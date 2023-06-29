#include <stdio.h>
int main()
{
    int p,d;
    scanf("%d%d", &p,&d);
    int s = ((p*p)/4 - d*d)/2;
    printf("%d", s);
}
