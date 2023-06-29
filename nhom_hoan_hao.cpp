#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main ()
{
	ll a,b,c,sum,t;
	cin>>t;
	while(t--){
		cin >> a >> b >> c;
		sum = a+b+c;
		cout << min(a,min(b,(sum/3))) << endl;
	}
	
}


