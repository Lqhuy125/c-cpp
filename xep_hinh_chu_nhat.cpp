#include <stdio.h>
#include <math.h>
#include <string.h>
int main ()
{
	int a[100];
	for(int i=0;i<3;i++){
			scanf("%d",&a[i]);
		}
		if(a[0]==a[1] && a[2]%2==0)
			printf("YES");
		else if(a[1]==a[2] && a[0]%2==0)
			printf("YES");
		else if(a[0]==a[2] && a[1]%2==0)
			printf("YES");
		else if(a[0]+a[1] ==a[2])
			printf("YES");
		else if(a[1]+a[2] ==a[0])
			printf("YES");
		else if(a[0]+a[2] ==a[1])
			printf("YES");
		else
			printf("NO");
}


