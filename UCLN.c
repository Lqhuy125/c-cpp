#include <stdio.h>
int main (){
    int a,b, ucln;
    scanf("%d%d", &a, &b);

    if (a == 0 || b == 0) {
        ucln = a + b;
        }
    else {
        while (a != b ){
            if (a > b) {
                a = a - b;
            }
            else {
                b = b - a;
            }
        ucln = a;
        }
    }
    printf("ucln = %d", ucln);

}