#include <stdio.h>

int main (){
	int a[10];
	int b[10];
	int count = 0;
		for (int i = 0; i<5; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i<5; i++)
		{
			scanf("%d", &b[i]);
		}
	for (int i = 0; i<5; i++)
	{
		if (a[i] + b[i] == 1) count++;
	}
	if (count == 5) printf("Y");
	else printf("N");
	return 0;

}

