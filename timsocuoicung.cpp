#include <stdio.h>
#include <math.h>
int socuoi(int s, int n, int m)
{
	if (m==0) {
		return 1;
	}
	s = s*n;
	s = s%10;
	return s;
}
int main()
{   
    int n,s;
    long long m;
    do
    {
        scanf("%d", &n);
    } while (n>100 || n<0);
    scanf("%lld", &m);
    printf("%d", socuoi(1,n,m) );
}
