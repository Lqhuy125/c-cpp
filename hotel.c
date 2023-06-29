#include <stdio.h>
int main (){
    int N, K, X, Y, tien;
    scanf("%d", &N);
    scanf("%d", &K);
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if ( N <= K){
        printf("%d", N * X);
    } else {
    printf("%d", K * X + (N - K) * Y);
    }

}