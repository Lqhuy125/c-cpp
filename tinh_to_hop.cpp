#include <stdio.h>
int tu(int n)
{
	if (n==0) return 1;
	else return n *tu(n-1);
}
int result(int n)
{
	return  (tu(n)) / ( tu(3) * ( tu(n-3) ) );
}
int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%d", result(n) );
}
