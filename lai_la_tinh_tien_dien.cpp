#include <stdio.h>

int main ()
{
	long long n,t;
	scanf("%lld", &n);
	if (n>=0 && n<50)
	{
		t = n*100;
	}else if (n>=50 && n<1000)
	{
		t = 50*100 + (n-50)*500;
	}else if (n>=1000 && n<10000)
	{
		t = 50*100 + 950*500 + (n-1000)*1000;
	}else
	{
		t = 50*100 + 950*500 + 9000*1000 + (n-10000)*1200;
	}
	printf("%lld", t);
	return 0;
}

