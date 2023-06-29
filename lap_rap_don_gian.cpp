#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll a,b;
        cin>>a>>b;
        ll mn=min(a,b);
        mn=min(mn,(a+b)/3);
        
        cout<<mn<<endl;
    }
	return 0;
}
