#include <stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    int time = a + b;
    if (time < 24) {
        printf ("%d", time);
        }
    if (time == 24) {
        printf ("%d", 0);
        } 
    if (time > 24) {
        printf ("%d", time - 24);
        }
}