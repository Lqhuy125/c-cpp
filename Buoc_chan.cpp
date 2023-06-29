#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n == 1) {
        	cout<< 2 <<"\n";
            continue;
        }
        if(n == 2) {
        	cout<< 1 <<"\n";
            continue;
        }
        if(n % 3 == 0) {
        	cout<< n/3 << "\n";
            continue;
        }
        cout<< n/3 + 1 << "\n";
    }
    return 0;
}
