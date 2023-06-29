/*  Doc mot gia tri so nguyen X va in ra 6 so le lien tiep ke tu X, mot gia tri tren moi dong, ke ca X neu phu hop.

Dau vao

Dau vao se la mot gia tri so nguyen duong.

Dau ra

Dau ra se la mot day gom sau so le.

INPUT

8

OUTPUT

9

11

13

15

17

19 */
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n );
    
    if (  n % 2 == 0){
        n = n +1;
        for (int x = 0; x<6 ; x++){
           
            printf("%d\n", n);
            n+=2;
        }
    } else
    {
      for (int x = 0; x<6 ; x++){
           
            printf("%d\n", n);
            n+=2;
        }  
    } 
    
}
