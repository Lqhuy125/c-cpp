#include <stdio.h>
int main(){
      int a, b, UCLN;
      printf("nhap vao so a b");
      scanf("%d%d", &a, &b);

        if (a == 0 || b == 0){
           UCLN = (a + b);
           printf("UCLN la %d", UCLN);}

        else {
               while (a != b){
                  if (a > b ) {
                   UCLN = a - b;
                 }
                   else {
                   UCLN = b - a;
                  }
                 }
           }
        
        printf("UCLN = %d", UCLN);
}
