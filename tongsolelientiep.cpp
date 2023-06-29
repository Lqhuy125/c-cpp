/*  Doc hai gia tri so nguyen X va Y. In tong cua tat ca cac gia tri le giua chung nhung khong ke X va Y .

Dau vao

Tep nhap chua hai gia tri so nguyen (104=X,Y=104).

Dau ra

Chuong trinh phai in mot so nguyen. So nay la tong hop tat ca cac gia tri le giua hai gia tri dau vao kieu nguyen.*/
#include <stdio.h>
int main ()
{
    int x,y, ny, nx;
    int t = 0;
    scanf("%d%d",&x,&y );
    if (x > y)
    {ny = y +1; for(ny; ny<x;ny++)
        {
            if ( ny % 2 != 0)
            {
                t = t + ny;
            }
        } printf("%d", t);
    }
    else if (x < y)
    { nx = x+1; for (nx; y > nx ; nx++){
            
            if ( nx % 2 != 0){
               t = t + nx;
            }
         } printf("%d", t);
    } 
     else 
    {
        printf("%d", 0);
    }
    
}

