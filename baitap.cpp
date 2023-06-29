#include <stdio.h>
#include <math.h>
int a[100];
int n;

void NhapMang(int a[100], int &n)
{
	do{
		printf("Nhap vao so luong phan tu (0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 ||  n>100);
	
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[100], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	
}
int Tinhtongduong(int a[100], int n)
{	int tong = 0;
	for(int i=0; i<n; i++)
	{
		if ( a[i] > 0)
		{
			tong += a[i];
		}
	}
	return tong;
}
int Tichkhackhong(int a[100], int n)
{
	int tich = 1;
	for(int i=0; i<n; i++)
	{
		if ( a[i] != 0)
		{
			tich = tich * a[i];
		}
	}
	return tich;
}
int Tongkhoang(int a[100], int n)
{
	int tongkhoang = 0;
	for(int i=0; i<n; i++)
	{
		if ( a[i] > -5 && a[i] < 7)
		{
			tongkhoang += a[i];
		}
	}
	return tongkhoang;
}
int Trungbinhnhan(int a[100], int n)
{	int Trungbinhnhan = 1;
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		if ( a[i] % 2 != 0)
		{	sum++;
			Trungbinhnhan = Trungbinhnhan*a[i];
		}
	}
	
	return pow(Trungbinhnhan, (float)1/sum);
}
int Timhaiphantu(int a[100], int n)
{	int min = a[0] * a[1];
	int min1, min2 ;
	for(int i=0; i < n - 1; i++)
	{
		if (a[i] * a[i+1] < min)
		{
			min = a[i] * a[i+1];
			min1 = i;
			min2 = i+1;
		}
	}
	printf("\n2 phan tu co tich nho nhat la %d %d",a[min1],a[min2]);
}
int main()
{	
	NhapMang(a, n);
	XuatMang(a, n);  
	printf("Tong cac so duong = %d", Tinhtongduong(a,n));
	printf("\nTich cac phan tu khac 0 = %d", Tichkhackhong(a, n) );
	printf("\nTong cac phan tu trong khoang = %d", Tongkhoang(a,n));
	printf("\nTrung binh nhan cac so le = %d", Trungbinhnhan(a, n) );
	Timhaiphantu(a,n);
	 
	
}
