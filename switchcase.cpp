#include <stdio.h>
int main (){
    int n;
    printf("nhap so n (tu 1 den 7) n = ");
    scanf("%d", &n);

    switch ( n )
     /* co the su dung 
    case 1:
    case 2:
    ...
    case n:

        lệnh
        
      break;    
    */
    {
        case 1:
             printf("Chu nhat");
            break;

        case 2:
             printf("Thu 2");
            break;  

        case 3:
             printf("Thu 3");
            break;

        case 4:

             printf("Thu 4");
            break;

        case 5:
             printf("Thu 5");
            break;
        case 6:

             printf("Thu 6");
            break;    
        case 7:

             printf("Thu 7");
            break;

        default:
             printf ("gia tri n khong dung");
        break;
    }
}