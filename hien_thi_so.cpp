#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main ()
{
	ll n;
	cin >> n;
	if(n % 2 == 1){
	    cout << 7;
	    n = n - 3;
	}
	while(n > 1){
	    cout << 1;
	    n = n - 2;
	}
}


