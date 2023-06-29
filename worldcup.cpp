#include <stdio.h>

int main (){
	int a[100];

	for (int i = 1; i<=6; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i<=6; i++)
	{
		if (a[i] != 0)
		{
			printf("\nCo khieu nai!");
		} else 
		{
			printf("\nKhong khieu nai!");
		}
	}
}

