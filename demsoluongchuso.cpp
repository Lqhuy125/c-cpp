#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    scanf("%s", &a);
    printf("%lld", (a[0] == '-')?strlen(a)-1:strlen(a));
}
