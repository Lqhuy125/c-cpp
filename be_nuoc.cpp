#include <stdio.h>

int gcd(int a, int b)
{
	if (a==0 || b==0) return a+b;
	else
	{
		while (a!=b)
		{
			if (a>b) a-=b;
			else b -= a;
		}
		return a;
	}
}
int max(int x, int y)
{
	int max = x;
	if (y>max)
	{
		max = y;
	}
	return max;
}
int min(int x, int y)
{
	int min = x;
	if (y < min )
	{
		min = y;
	}
	return min;
}
int main ()
{
	int a, b, c, a2=0, a3=0, a5=0, b2=0, b3=0, b5=0;
	scanf("%d%d", &a,&b);
	c = gcd(a,b);
	a/=c;
	b/=c;
	while (a%2==0) { a/=2; a2++;} 
	while (a%3==0) { a/=3; a3++;} 
	while (a%5==0) { a/=5; a5++;} 
	
	while (b%2==0) { b/=2; b2++;} 
	while (b%3==0) { b/=3; b3++;} 
	while (b%5==0) { b/=5; b5++;} 
	
	if (a!=1 || b != 1) printf("-1");
	else 
	printf("%d",max(a2,b2)-min(a2,b2)+max(a3,b3)-min(a3,b3)+max(a5,b5)-min(a5,b5));
}

