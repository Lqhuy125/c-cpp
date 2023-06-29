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

void xoaMangTaiViTri(float x[100], int &n){
	int k;
	printf("\nNhap vi tri can xoa:");
	scanf("%d", &k);
	for(int i=k; i<n-1; i++){
		x[i] = x[i+1];
	}
	n--; 
}

int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	xoaMangTaiViTri(a,n); 
	xuatMang(a, n);
}


