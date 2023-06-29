#include <stdio.h>
int main (){
    float luong, thue;
    scanf("%f", &luong);
    if (luong > 15) {
        thue = luong*0.3;
        printf("Luong rong = %f", luong - thue);
    }
    else if (7<luong<15)
    {
        thue = luong * 0.2;
        printf("Luong rong = %f", luong - thue);
    }else
    {
        thue = luong*0.1;
        printf("Luong rong = %f", luong -  thue);
    }
}