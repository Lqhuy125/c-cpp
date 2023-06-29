#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct a{
	int ;
	float ;
	char ten[50], ;
	long ;
};
int main ()
{
	int n;
	scanf("%d", &n);
	a a[100];
	for(int i=0;i<n;i++)
	{
		printf("Nhap  thu %d: ", i+1);
		fflush(stdin);
		gets(a[i]);
		printf("Nhap  thu %d: ", i+1);
		scanf(" ", a[i]);
	}
	printf("|%20s|%20s|%20s|%20s|\n", " ", " ", " ", " ");
	for(int i=0;i<n;i++)
	{
		printf("|%20s|%20s|%20s|%20s|\n", a[i], a[i], a[i], a[i]);
	}
	
}


