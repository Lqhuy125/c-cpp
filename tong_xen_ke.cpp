#include <stdio.h>
// S = 1 - 2 + 3 - 4 + ... - n;
int main ()
{
	int n, s = 0;
	scanf("%d", &n);
	// xet n chan hay le
	if ( n%2==0) s = -1*(n/2);
	else s = -1* (n-1)/2 + n;
	printf("%d", s);

}


