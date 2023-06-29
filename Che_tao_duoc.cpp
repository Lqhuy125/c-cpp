#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
	ll x, y, k;
    cin >> x >> y >> k;
    
    long double steps = k*y + k - 1;
    
    ll ans = ceil(steps/(x-1));
    
    cout << ans + k << endl;
}


