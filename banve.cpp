#include <stdio.h>
 
int main()
{
	int n; 
	scanf("%d", &n);
	int tiennhan = 0, tiennhan1 = 0; 
	while(n-- > 0)
	{ 
		int a;
		scanf("%d", &a);
 		if(a == 25) 
			tiennhan = tiennhan + a; 
 		else
 		{ 	tiennhan1 = tiennhan1 + (a-25);}
  	}
  	if(tiennhan >= tiennhan1)
	{
		printf("YES");
	} else
	{
		printf("NO");
	} 
}
