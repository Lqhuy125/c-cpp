#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while (t--){
		ll n;
		cin>>n;
		int check=0;
		for (ll i = 1; i <= 31622; ++i) {
			if (n%i==0 && n%(i+1)==0) {
			    check = 1;
			    cout<<i<<" ";
			}
		}
		if (check==0) {
		  cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}
