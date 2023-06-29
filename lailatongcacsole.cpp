#include <stdio.h>
#include <math.h>
int main()
{
	long long a,b,x,y;
	long long tong;
	scanf("%lld%lld", &a, &b);
	if (a>b) {x=b; y=a;}
	else {x=a; y=b;};
	// dam bao neu 2 dau mut le se khong nhan gia tri
	if(x%2!=0) x++; 
	if(y%2!=0) y--;
	//
	while (x%2==0) x++;
	while(y%2==0) y--;
	long long temp = (y-x)/2 + 1;
	tong = (x+y)*temp/2;
	printf("%lld", tong);
}
