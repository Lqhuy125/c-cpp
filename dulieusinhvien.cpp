#include <stdio.h>
#include <string.h>

typedef struct sinhvien
{
	char name[100];
	int msv;
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
		printf("Nhap diem: ");
		scanf("%f", &a[i].diem);
	}
	for (int i = 0; i<n; i++)
	{
		printf("Ten: %s ", a[i].name);
		printf("Msv: %d ", a[i].msv);
		printf("Diem: %.2f ", a[i].diem);
		printf("\n");
	}
	// tim diem max
	float max = a[0].diem;
	for (int i = 0; i<n; i++)
	{
		if (a[i].diem > max)
		{
			max = a[i].diem;	
		}
	}
	for (int i = 0; i<n; i++)
	{
		if (a[i].diem == max)
		{
			printf("Sv co diem max la: %s", a[i].name);
		}
	}
	// sap xep sv theo thu tu diem tang dan
	sinhvien temp; // khai bao ca bien temp se lam
	for (int i = 0; i<n-1; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if (a[j].diem < a[i].diem)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
	for (int i = 0; i<n; i++)
	{
		printf("\n %s co diem: %.2f ", a[i].name, a[i].diem);
	}
	
	// tim kiem va in ra sv co diem >5
	printf("\nSinh vien co diem >5: ");
	for (int i = 0; i<n; i++)
	{
		if (a[i].diem > 5)
		{
			printf(" %s ", a[i].name);
		}
	}
	// nhap ma sv tim sv
	int find;
	printf("\nNhap msv can tim: ");
	scanf("%d", &find);
	for (int i = 0; i<n; i++)
	{
		if (find == a[i].msv)
		{
			printf("Thong tin ban can tim la: ");
			printf("\n Ten sv: %s Diem: %.2f Ma sinh vien: %d", a[i].name, a[i].diem, a[i].msv);
		}
	}
	
}

