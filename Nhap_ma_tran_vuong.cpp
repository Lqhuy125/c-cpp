#include <stdio.h>
#include <math.h>
#include <string.h>
void input_array(int &n, int a[100][100])
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			printf("Nhap a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
			
}
void output_array(int n, int a[100][100])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
int main ()
{
	int n, a[100][100];
	input_array(n,a);
	output_array(n,a);  
}


