#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct ThongTin
	{
		char Tensv[100], DiaChi[100];
		int Masv;
		float diem;
	};

int main(){
	ThongTin B1,B2;
	
	//sinh vien 1
	printf("Nhap vao ten sv1: ");
	fflush(stdin);
	gets(B1.Tensv);
	printf("Nhap vao msv: ");
	scanf("%d",&B1.Masv );
	printf("Nhap vao dia chi: ");
	fflush(stdin);
	gets(B1.DiaChi);
	printf("Nhap diem trung binh: ");
	scanf("%f", &B1.diem);
	
	//sinh vien 2
	printf("Nhap vao ten sv2: ");
	fflush(stdin);
	gets(B2.Tensv);
	printf("Nhap vao msv: ");
	scanf("%d",&B2.Masv);
	printf("Nhap vao dia chi: ");
	scanf("%s",&B2.DiaChi);
	printf("Nhap diem trung binh: ");
	scanf("%f",&B2.diem );
	
	printf("\nThong tin sv1 ban vua nhap la:");
	printf("\nTen sv: %s",B1.Tensv);
	printf("\nMa sv: %d",B1.Masv);
	printf("\nDia Chi: %s", B1.DiaChi);
	
	printf("\nThong tin sv2 ban vua nhap la:");
	printf("\nTen sv: %s",B2.Tensv);
	printf("\nMa sv: %d",B2.Masv);
	printf("\nDia Chi: %s", B2.DiaChi);
	if ( B2.diem > B1.diem)
	{
		printf("\n%s", B2.Tensv);
	} else if ( B2.diem < B1.diem)
	{
		printf("\n%s", B1.Tensv);
	}
	

}
