#include <stdio.h>

int main (){
    int d, m, y, x;
        scanf("%d%d%d", &d,&m,&y);
      switch (m)
    {
        case 1:
        case 3:
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
           x = 31;
         break;
        case 2:
          if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
           x = 29;
          } else
           x = 28;
         break;
        case 4: 
        case 6: 
        case 9: 
        case 11:
            x = 30;
         break;       
     }
    if (y>0 && m < 13 && m > 0 && d <= x){
        d++;
        if (d==x && m == 12){
            d = 1;
            m = 1;
            y++;
         }
         else if (d == x && m != 12){
            d = 1;
            m++;
        }
         else if (m == 2){
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                  if (d == 29)
                  {
                      d = 1;
                      m++;
                   }
                }
               else{
                   if (d == 28){
                       d = 1;
                       m++;
                   }
                }
        }
     printf("%d/%d/%d", d,m,y);
    } else {printf("loai");}
}     