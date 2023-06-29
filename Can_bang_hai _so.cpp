#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int t;
    cin >> t;
	while(t--){
		ll a, b;
	    cin >> a >> b;
	    ll diff = abs(a - b);
	    ll sum = 0;
	 
	    for (ll i = 0; i<100000; i++)
	    {
	        sum += i;
	        if (sum >= diff)
	        {
	            if ((sum - diff) % 2 == 0){
	            	cout << i << endl;
	                break;
				} 
	        }
	    }
	}
}

