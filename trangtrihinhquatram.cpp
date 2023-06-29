#include <stdio.h>

int main (){
	int n;
	int a[100][100];
	scanf("%d", &n);
	for (int i = 1; i <=n; i++)
	{
		for (int j = n; j >= 11; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 2*n-1; i >n; i--)
	{
		for (int j = n; j >1; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = n; i >1; i--)
	{
		for (int j = 2*n-1; j >n+1; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = n+1; i <2*n-1; i++)
	{
		for (int j = 2*n-2; j >n; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;

}

