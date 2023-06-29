#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nines;

int main(){
    int t;
    cin >> t;
    while (t--){
    	ll n;
	    cin >> n;
	    while (nines * 10 + 9 <= n + n - 1)
	        nines = nines * 10 + 9;
	    ll ans = 0;
	    for (int i = 0; i <= 8; i ++)
	    {
	        ll tar = (nines + 1) * i + nines;
	        ll res = min(tar - 1 >> 1, n + n - 1 - tar + 2 >> 1);
	        if (res > 0)
	            ans += res;
	    }
	    cout << ans << endl;
	}
}
