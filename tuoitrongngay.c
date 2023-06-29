#include <stdio.h>

int main (){
    int a, ngay, thang, nam;
    printf("Nhap gia tri cua a = ");
    scanf("%d", &a);
    nam = a/365;
    thang = (int)(a - 365*nam)/30;
    ngay = a - 365*(int)nam - 30*(int)thang;

    printf("%d nam", nam);
    printf("\n%d thang", thang);
    printf("\n%d ngay", ngay);
}