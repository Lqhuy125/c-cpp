#include <stdio.h>
#include <math.h>
int a[100];
	int n, P;
int kiemtra(int a[100], int n)
{
	for (int i = 0; i<n-1; i++)
	{
		if (abs(a[i]-a[i+1]) <= P )
		{
			return 1;
			
		}else 
		{
			return 0;
		}
	}
}
int main (){
	
	scanf("%d", &P);
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	if (kiemtra(a, n))
	{
		printf("YOU WIN");
	} else 
	{
		printf("GAME OVER");
	}
}

