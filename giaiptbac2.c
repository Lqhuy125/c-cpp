#include <stdio.h>
#include <math.h>

int main (){
    float a,b,c,x1,x2,delta;
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        printf("a khong thoa man");
    }  else {
         delta = b*b - 4*a*c;
         printf("delta = %.2f", delta);
         
        if (delta > 0) {
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf ("Nghiem cua phuong trinh la: x1 = %f và x2 = %f", x1, x2);
         } else if (delta == 0) {
            x1 = -b / (2*a);
            printf("Nghiem cua phuong trinh la x1 = x2 = %f", x1);
         } else  {
             printf("\nPhuong trinh vo nghiem");
         }
    }
    
    
}