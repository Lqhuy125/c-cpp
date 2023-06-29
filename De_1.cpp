#include "stdio.h"
#include "limits.h"
float a[100];
int n,k;

void nhapMang(float x[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%f", &x[i]);
	}
}

void xuatMang(float x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%.1f ", x[i]);
	}
}

void tongle(float x[100], int n){
	float s = 0;
	int d = 0;
	for(int i=0; i<n; i++){
		if((int)x[i]%2!=0)
		{
			s+=x[i];
			d++;
		}
	}
	if (d>0) printf("Tong binh phuong cac so le: %.2f", s/d);
	else printf("Khong co so nao le");
}

int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	tongle(a,n); 
}


