#include<iostream>
#define ll long long 
#define min(x,y) (((x) < (y)) ? (x) : (y))

int main(){
    
    ll a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    int x = (a+b+c)/9;
    if (x<=min(a,min(b,c)) && (a+b+c)%9==0)
        printf("YES");
    else
        printf("NO");
    
}
