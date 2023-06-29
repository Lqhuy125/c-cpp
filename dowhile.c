#include <stdio.h>
int main (){
    int n;
       do {
           printf("moi ban nhap n = ( 1 < n < 100)");
           scanf("%d", &n);

            if ( n <= 1 || n >= 100) {
                
                 printf("moi ban nhap lai...");
             } else {
                 printf("ban da nhap dung, chuong trinh se dung lai");
             }
             
       } while ( n <= 1 || n >= 100); 
}