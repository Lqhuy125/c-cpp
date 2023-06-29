#include <stdio.h>

int main (){
	int n,a[100];
	scanf("%d", &n);
	for(int i = 0; i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i<n;i++)
	{
		printf("%c", 3253-a[i]);
	}
	return 0;

}

