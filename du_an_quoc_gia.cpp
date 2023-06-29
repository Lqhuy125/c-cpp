#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,g,b,x,y,z,ans;
    cin>>n>>g>>b;
 
    y=(n+1)/2;
    z=(n/2);
    x=(y/g);
    if(y%g==0) x--;
    if(x*b>=z) ans=x*b+y;
    else ans=n;
 
    cout<<ans<<endl;
}
 
int main()
{
	solve();
}

