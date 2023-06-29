#include <stdio.h>

int main (){
	int n;
	do
	{
		scanf("%d", &n);
		if (n!= 2002)
		{
			printf("Sai mat khau\n");
		} else 
		{
			printf("Duoc phep truy cap");
		}
	} while (n != 2002);
	return 0;
}
