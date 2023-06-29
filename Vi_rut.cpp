#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, a[100], b[100] = {0};
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++)
	{
		while (a[i]!=0)
		{
			b[i] += a[i]%3;
			a[i]/=3;
		}
	} 
	
	for(int i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
