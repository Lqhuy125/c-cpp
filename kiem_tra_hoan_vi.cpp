#include <stdio.h>
int a[100], b[100], n;
void nhapmang(int x[100], int n)
{
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &x[i]);
	}
}
void xuatmang(char y, int x[100], int n)
{
	for (int i = 0; i<n; i++)
	{
		printf("%c[%d] = ", y, i);
		printf("%d ", x[i]);
	}
}
void kiemtrahoanvi(int a[100], int b[100], int n)
{
	int count = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i] == b[n-i-1])
		count++;
	}
	if (count == n)
	{
		printf("Day hoan vi");
	}else printf("Day khong hoan vi");
}
int main()
{
	scanf("%d", &n);
	nhapmang(a,n);
	xuatmang('a',a,n);
	printf("\n");
	nhapmang(b,n);
	xuatmang('b',b,n);  
	printf("\n"); 
	kiemtrahoanvi(a,b,n); 
}

