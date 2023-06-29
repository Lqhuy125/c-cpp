#include <stdio.h>
typedef struct sinhvien{
	char name[100];
	int msv;
	char khoa;
	float diem;
};
int main (){
	sinhvien a[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{	
		printf("Nhap ten: ");
		fflush(stdin);
		gets(a[i].name);
		printf("Nhap msv: ");
		scanf("%d", &a[i].msv);
		printf("Nhap khoa: ");
		scanf("%s", &a[i].khoa);
		printf("Nhap diem: ");
		scanf("%f", &a[i].diem);
	}
	for (int i = 0; i<n; i++)
	{
		printf("Ten: %s ", a[i].name);
		printf("Msv: %d ", a[i].msv);
		printf("Khoa: %c ", a[i].khoa);
		printf("Diem: %.2f ", a[i].diem);
		printf("\n");
	}
	for (int i = 0; i<n; i++)
	{
		if (a[i].khoa == 'A') dem++;
		if (a[i].khoa == 'B') dem1++;
		if (a[i].khoa == 'C') dem2++;
	}
	return 0;

}

