#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sol(){
	ll a, b, cnt = 0, cnt9 = 0, ans1;
    cin >> a >> b;
    while (b > 0)
    {
        ans1 = b % 10;
        if (ans1 == 9)
        {
            cnt9++;
        }
        b /= 10;
        cnt++;
    }
    if (cnt == cnt9)
    {
        cout << a * cnt9 << endl;
    }else
    cout << (a * (cnt - 1)) << endl;
}
int main ()
{
	ll t;
	cin>>t;
	while(t--){
		sol();
	}
}


