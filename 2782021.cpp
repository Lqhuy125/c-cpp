#include <stdio.h>

int main (){
	int a[100], n;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n;i++)
	{
		printf("%d ", a[i]);
	}
	int tong = 0;
	for (int i = 0; i<n;i++)
	{
		if ( a[i] >= -15 && a[i]<=10)
		{
			tong += a[i];
		}
	}
	printf("\ntong = %d", tong);
	return 0;

}

