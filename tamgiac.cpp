#include <stdio.h>
#include <math.h>

int main(){
    double xa, xb, xc, ya, yb, yc, AB, AC, BC,p,s;
    printf("Nhap vao toa do cua A");
    scanf("%lf%lf", &xa, &ya);
    printf("Nhap vao toa do cua B");
    scanf("%lf%lf", &xb, &yb);
    printf("Nhap vao toa do cua C");
    scanf("%lf%lf", &xc, &yc);

    AB = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    BC = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));
    AC = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
    printf("%lf %lf %lf", AB,BC,AC);

    if (AC + AB > BC && AB + BC > AC && BC + AC > AB){
        printf("ABC la tam giac");
         if (AB == AC || AB == BC || AC == AB) {
            printf("ABC la tam giac can");
        }
          else {
              printf("ABC khong phai la tam giac can");
          }
          p = AB + AC + BC;
          s = sqrt(p/2 * ( p/2 - AB ) * (p/2 - AC ) *  (p/2 - BC ));
          printf("\nChu vi tam giac la: %lf \n dien tich tam giac la: %lf", p, s);}

    else {
        printf("ABC khong phai la tam giac");
    }

}