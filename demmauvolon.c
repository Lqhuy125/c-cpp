#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a == b && b ==c) {
        printf("%d", 1);
    } else if (a == b || b == c || c == a){
        printf("%d", 2);
    } else {
        printf("%d", 3);
    }
}