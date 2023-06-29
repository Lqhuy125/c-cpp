#include <stdio.h>
int main (){
    int n, giaithua;
    
    do { printf("Nhap vao n = ");
         scanf("%d", &n);

    } while ( n < 0);
    
    int i = 1;  
    giaithua = 1;

    for (i; i <= n; i++) {

    giaithua = giaithua * i;
    }
    printf("Giai thua cua %d la %d", n, giaithua);
}
