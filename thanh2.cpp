#include <stdio.h>
typedef struct thietbi{
	int ma, loai, nam;
	char ten[100];
	long gia;
	float khauhao;
};
int main ()
{
	thietbi a[100];
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n; i++)
	{
		printf("Nhap ma thiet bi: ");
		scanf("%d", &a[i].ma);
		printf("Nhap ten thiet bi: ");
		fflush(stdin);
		gets(a[i].ten);
		printf("Nhap loai thiet bi: ");
		scanf("%d", &a[i].loai);
		printf("Nhap nam san xuat: ");
		scanf("%d", &a[i].nam);
		printf("Gia nhap khau: ");
		scanf("%ld", &a[i].gia);
		printf("Nhap khau hao: ");
		scanf("%f", &a[i].khauhao);
	}
	for(int i = 1; i<=n; i++)
	{
		printf("ma thiet bi: %d\n", a[i].ma);
		printf("ten thiet bi: %s\n", a[i].ten);
		printf("loai thiet bi: %d\n", a[i].loai);
		printf("nam san xuat: %d\n", a[i].nam);
		printf("gia nhap khau: %ld\n", a[i].gia);
		printf("khau hao: %.2f\n", a[i].khauhao);
		printf("-------------------\n");
	}
	long max = a[1].gia;
	for(int i = 1; i<=n; i++)
	{
		if (a[i].gia > max) max = a[i].gia;
	}
	printf("Thiet bi co gia cao nhat la: \n");
	for(int i = 1; i<=n; i++)
	{
		if (a[i].gia == max)
		{
			printf("ma thiet bi: %d\n", a[i].ma);
			printf("ten thiet bi: %s\n", a[i].ten);
			printf("loai thiet bi: %d\n", a[i].loai);
			printf("nam san xuat: %d\n", a[i].nam);
			printf("Gia nhap khau: %ld\n", a[i].gia);
			printf("khau hao: %.2f\n", a[i].khauhao);
			printf("-------------------\n");
		}
	}
	int findma;
	double giathanhli = 0;
	printf("Nhap ma thiet bi can tim: \n");
	scanf("%d", &findma);
	for(int i = 1; i<=n; i++)
	{
		if (findma == a[i].ma) 
		{
			giathanhli = a[i].gia*(1-(a[i].khauhao/100)*(2021-a[i].nam));
		}
		
	}
	printf("Gia thanh ly cua sp co ma %d la: %.lf", findma, giathanhli);
}


