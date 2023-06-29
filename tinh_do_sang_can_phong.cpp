#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
	int n,m,k;
	float dosang=0;	
	scanf("%d%d%d", &n,&m,&k);
	dosang += n;
	if(m==0 || k==0)  
		dosang=n;
	else{
		for(int i=1;i<=k;i++){
			dosang += (float)n/(i*m);	
		}
	}
	printf("%.6f", dosang);
}


