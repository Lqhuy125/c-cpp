#include <stdio.h>
int main (){
    int n;
    int nhan = 1;
    int i = 1;

    scanf("%d", &n);
    
    while (i <= n ){
        nhan = nhan * i;
        i++;
    }
     printf("nhan la: %d", nhan);

}