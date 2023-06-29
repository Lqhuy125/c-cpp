#include <bits/stdc++.h>
using namespace std;
int sol(int a, int b, int n){
    if(a>b)
    swap(a,b);
    int m = n/b;
    for(m; m>=0;m--)
        if((n - m*b)%a == 0)
            return m + (n - m*b)/a;
    return -1;
}
int main ()
{
	int a,b,n,res=0;
	cin>>a>>b>>n;
	cout<<sol(a,b,n);
}


