#include <stdio.h>
#include <math.h>
int main ()
{
	long long n,x1,x2,y1,y2,r1,r2;
	scanf("%lld", &n);
	while(n--)
	{
		scanf("%lld %lld %lld %lld %lld %lld", &x1,&y1,&r1,&x2,&y2,&r2);
		int d = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
		if (r1 == r2 && x1 == x2 && y1==y2) printf("trung nhau\n");
		else 
		{
			if (d==r1+r2) printf("tiep xuc\n");
			else 
			{
				if (d>r1+r2) printf("roi nhau\n");
				else 
				{
					if (d <=abs(r1-r2) ) printf("chua nhau\n");
					else printf("cat nhau\n");
				}
			}
		}
	}
	return 0;
}

