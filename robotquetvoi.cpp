#include <stdio.h>
void xet(int m[100], int x, int y)
{
	for (int i = x; i<y; i++) m[i] = 1;
}
int main()
{
	int m[100];
	int a,b,c,d,e,f;
	int count = 0;
	scanf ("%d%d", &a, &b);
	scanf ("%d%d", &c, &d);
	scanf ("%d%d", &e, &f);
	
	for (int i = 0; i<100;i++)
	{	m[i] = 0;
		xet(m,a,b);
		xet(m,c,d);
		xet(m,e,f); 
	}  
	for (int i = 0; i<100; i++)
	{	
		if (m[i]==0)
		count++;
	}
	printf("%d", count);
}
