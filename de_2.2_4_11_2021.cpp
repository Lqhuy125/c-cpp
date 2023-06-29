#include <stdio.h>
#include <string.h>
typedef struct nv{
	char name[100];
	int tuoi, mnv, hour;
	long luong;
};
int main ()
{
	nv a[100];
	int n;
	scanf("%d", &n);
	for (int i = 1; i<=n; i++)
	{
		printf("Nhap ten nv thu %d: ", i);
		fflush(stdin);
		gets(a[i].name);
		printf("Nhap ma nhan vien thu %d: ",i);
		scanf("%d", &a[i].mnv);
		printf("Nhap tuoi nhan vien thu %d: ", i);
		scanf("%d", &a[i].tuoi);
		printf("Nhap so gio lam viec cua nhan vien thu %d: ", i);
		scanf("%d", &a[i].hour);
		printf("Luong cua nguoi thu %d: ",i);
		scanf("%ld", &a[i].luong);
	}
	for (int i=1; i<=n;i++)
	{
		printf("Ten: %s\n", a[i].name);
		printf("Ma nv: %d\n", a[i].mnv);
		printf("Tuoi: %d\n", a[i].tuoi);
		printf("So gio lam viec: %d\n", a[i].hour);
		printf("Luong: %ld\n", a[i].luong);
		printf("\n");
	}
	int maxtuoi = a[1].tuoi;
	for (int i = 1;i<=n;i++)
	{
		if (a[i].tuoi > maxtuoi) 
			maxtuoi = a[i].tuoi;
	}
	for (int i=1;i<=n;i++)
	{
		if (a[i].tuoi == maxtuoi) 
		{
			printf("Nhan vien co so tuoi lon nhat la:\n");
			printf("Ten: %s\n", a[i].name);
			printf("Ma nv: %d\n", a[i].mnv);
			printf("Tuoi: %d\n", a[i].tuoi);
			printf("So gio lam viec: %d\n", a[i].hour);
			printf("Luong: %ld\n", a[i].luong);
			printf("\n");
		}
	}
	double maxluong = (float)a[1].luong/a[1].hour;
	for (int i = 1;i<=n;i++)
	{
		if ((float)a[i].luong/a[i].hour > maxluong) 
			maxluong = (float)a[i].luong/a[i].hour;
	}
	for (int i=1;i<=n;i++)
	{
		if ((float)a[i].luong/a[i].hour == maxluong) 
		{
			printf("Nhan vien co so muc luong theo gio max la:\n");
			printf("Ten: %s\n", a[i].name);
			printf("Ma nv: %d\n", a[i].mnv);
			printf("Tuoi: %d\n", a[i].tuoi);
			printf("So gio lam viec: %d\n", a[i].hour);
			printf("Luong: %ld\n", a[i].luong);
			printf("\n");
		}
	}
	return 0;
}

