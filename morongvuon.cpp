#include <stdio.h>
#include <math.h>

int main (){
	int s,n,t,tong,tich,d,a,b;
	scanf("%d%d%d", &s,&n,&t);
	tong = (t-n*n)/n;
	tich = s;
	d = tong*tong - 4*tich;
	a =  (tong + sqrt(d))/2;
	b = (tong - sqrt(d))/2;
	printf("%d %d", a, b);

}

