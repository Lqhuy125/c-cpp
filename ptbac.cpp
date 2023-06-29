#include <stdio.h>
#include <math.h>

int main (){
    float a,b,c,x,x1,x2,delta;
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0) {
        printf("a khong thoa man");
    }  else {
         delta = b*b - 4*a*c;
         
        if (delta > 0) {
            x1 = (-b - sqrt(delta))/2*a;
            x2 = (-b + sqrt(delta))/2*a;
            printf ("Nghiem cua phuong trinh la: x1 = %f \nx2 = %f", x1, x2);
         } else if (delta == 0) {
            x = -b / 2*a;
            printf("Nghiem cua phuong trinh la x = %f", x);
         } else (delta < 0 ) {
             printf("Phuong trinh vo nghiem");}
         }
    }
    
    
}
