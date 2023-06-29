#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
	int n,m,k;
	float dosang=0;
	scanf("%d%d%d",&n,&m,&k);
	
	dosang = n;
	for(int i=0;i<k;i++){
		dosang += (float)n/((i+1)*m);
	} 
	printf("%.6f", dosang);
}


