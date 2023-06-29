#include <stdio.h>

int m, n, a[100][100];

void nhapmang(int a[100][100])
{
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatmang(int a[100][100])
{
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("%d", a[i][j]);
		}
	}
}
void Tonghang(int a[100][100])
{
	for(int i=1;i<=m;i++)   
  	{
  		int s=0;
     	for(int j=1;j<=n;j++)
      	{
      		s = s + a[i][j];
      	}
    	printf("%d ",s); 
   }
}
void giatrimaxmoicot(int a[100][100])
{	
	int j = 1;
	while (j<=n)
	{	int max = a[0][0];
		for(int i = 1; i <= m; i++)
		{
			if (a[i][j] > max) max = a[i][j];
		}
		printf("%d ", max);
		j++;
	}
}
void Trungbinh(int a[100][100])
{	
	float TBC=0;
	int sum = 0;
	for(int i = 1; i <= m; i++)	
		for(int j = 1; j <= n; j++)
		{
			if (i % 2 == 0 && j % 2 != 0 && a[i][j] % 3 == 0)
			{
					TBC += a[i][j];
					sum++;
			} 
		}
	
	if (sum != 0) printf("%.3f", TBC/sum);
	else printf("khong co so thoa man");
}
int main (){
	scanf("%d", &m);
	scanf("%d", &n);
	nhapmang(a);
	
	Tonghang(a); 
	printf("\n"); 
	giatrimaxmoicot(a); 
	printf("\n"); 
	Trungbinh(a); 
}
