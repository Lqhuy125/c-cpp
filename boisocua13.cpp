/*  Viet mot chuong trinh doc hai so nguyen X va Y va tinh tong cua tat ca cac so khong chia het cho 13 giua chung, ke ca hai gia tri X va Y neu thoa man.

Dau vao

Mot dong gom 2 so nguyen X va Y co tri tuyet doi nho hon 1000

Dau ra

In tong cua tat ca cac so giua X va Y khong chia het cho 13, bao gom ca X va Y n*/
#include <stdio.h>

int main (){
	int x,y;
	int cong = 0;
	scanf("%d%d", &x,&y);
    
    if (x<=y){ 
        for ( x; x <= y;x++)
	{ if (x % 13 != 0)
		{
		   cong = cong + x;
	  	}
         
	} printf("%d", cong);}

	else if (y<=x) {for ( y; y <= x;y++)
	{ if (y % 13 != 0)
		{
		   cong = cong + y;
	  	}
         
	} printf("%d", cong);}

}
