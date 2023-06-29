#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
	ll n;
	cin>>n;
	int cnt=0;
	while(n--){
		cnt += 2*(n+1) + n;
	}
	cout<<cnt;
}
