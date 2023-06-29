#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main ()
{
	ll n, x; 
	cin >> n >> x;
	ll v[n];
	for(ll i = 0; i < n; i++) 
		cin >> v[i];
 
	sort(v, v+n);
	reverse(v, v+n);
 
	ll count = 0, sum = 0,tb = 0;
	for(ll i = 0; i<n; i++){
	    sum += v[i];
	    tb = sum/(i+1);
	    if(tb >= x) count++;
	    else break;
	}
	cout<<count<<endl;
}


