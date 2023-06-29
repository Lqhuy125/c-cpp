#include <stdio.h>

int main (){
	int n;
	int a[100];
	int count[3];
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n; i++)
	{	
		count[i] = a[i]/3 + a[i]/5 - a[i]/15;
		
	}
	for(int i = 0; i<n; i++)
	{
		printf("%d\n", count[i]);
	}
}

