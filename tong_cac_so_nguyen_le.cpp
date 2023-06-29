#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
	ll n, k;
	cin >> n >> k;
	if (k*k<=n && k%2==n%2) 
		cout<<"YES"<<endl;
	else 
		cout << "NO"<<endl;
}


