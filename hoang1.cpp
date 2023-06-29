#include <stdio.h>

int main ()
{
	int n, a[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i<=n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Day da nhap la: \n");
	for (int i =1; i<=n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	int min = a[1];
	for (int i = 1; i<=n; i++)
	{
		if (a[i] < min) min = a[i];
	}
	printf("Gia tri nho nhat cua day la: %d\n", min);
	int d = 0;
	for(int i = 0; i<=n; i++)
	{
		if (a[i] == min) d++;
	}
	printf("Co %d gia tri nhu vay trong day so tren", d);
}


