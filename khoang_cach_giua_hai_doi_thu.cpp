#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main ()
{
	ll n,x,a,b;
		cin>>n>>x>>a>>b;
		cout<<min(n-1,abs(a-b)+x)<<endl;
}


