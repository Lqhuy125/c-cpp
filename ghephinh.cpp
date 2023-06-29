#include <stdio.h>

int main (){
	int a,b,c,d;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	int max1=a>b?a:b;
	int min1=a>b?b:a;
	int max2=c>d?c:d;
	int min2=c>d?d:c;
	if(max1 == max2)
	{
		if (min1+min2==max1)
		{
			printf("YES");
		} else {
			printf("NO");
		}
	}
	else {
		printf("NO");
	}
	return 0;

}

