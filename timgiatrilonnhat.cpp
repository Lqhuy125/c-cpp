#include <stdio.h>
	int n;
	double a[100];
/*void NhapMang(int a[100], int &n)
{	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[100], int n)
{
	for(int i=1; i<=n; i++){
		printf("%d ", a[i]);
	}
}
void giatrilonnhat(int a[100], int n)
{	int sum = 0;
	float max = a[0]/n;
	for(int i=1; i<=n; i++)
	{
		sum++;
		
		if (a[i]/(n-sum+1) > max)
		{
			max = a[i]/(n-sum+1);
		}
	}
	printf("%.2f", max);
}
void tinhtong(int a[100], int n)
{	int tong = 0;
	for(int i=1; i<n; i++){
		tong = tong + a[i] + a[i+1];
	}
	printf("%d", tong);
}*/
int main()
{	
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		scanf("%lf", &a[i]);
	}
	int tong = 0;
	float max = a[1]/n;
	for(int i=1; i<=n; i++)
	{
		if (a[i]/(n+1-i) > max)
		{
			max = a[i]/(n+1-i);
		}
		tong = tong + a[i];
	}
	if (n > 1)
	{
			tong = tong*2 - a[1] - a[n];
	}
	printf("%.2f\n%d", max, tong);   
}
