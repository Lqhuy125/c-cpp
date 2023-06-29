#include<stdio.h>
int main()
{
	int n;
	double s[100],a,b,c;
	scanf("%d",&n);
	for (int i=0 ; i<n; i++)
	{
		scanf("%lf%lf%lf", &a, &b, &c);
		s[i] = (a*2+b*3+c*5)/10;
	}
	for (int i = 0; i < n; i++)
		{		
			printf("%.1f\n", s[i]);				
		}
	return 0;	
}
