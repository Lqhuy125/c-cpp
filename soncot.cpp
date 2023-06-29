#include <stdio.h>
#include <math.h>

int main (){
	int n,k,s;
	scanf("%d%d", &n, &k);
	s = k*pow(k-1,n-1);
	printf("%d", s);
}

