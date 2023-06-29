#include<conio.h>
#include<stdio.h>
#include<math.h>
double tinh(long y)
{
    int q = 1, w;
    double tong = 0;
    long y1 = y; // neu k co dong nay thi gia tri y
				 // o while thu 2 se nhan nham gia tri cua 
				 // while thu 1
    while(y1>10)
    {
        y1 = y1/10;
        q++;
    }
    while(y>0)
    {
        w = y%10;
        tong = tong + pow(w,q);
        y=y/10;
    }
    return tong;
}
int main()
{
   
    for(long i = 1; i<=1000000;i++)
    {
        if(i==tinh(i))
            printf("%ld\n", i);
    }
    getch();
}
