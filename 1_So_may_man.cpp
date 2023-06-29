#include <bits/stdc++.h>
using namespace std;

#define ll long long
int sol(long long n)
{
    int ans = n % 10;
    while(n >= 10)
    {
        if(n % 10 == 4) return -1;
        n = n / 10;  
    }
    ans *= n;
    if(ans != 4) return ans;
    return -1;
}
int main ()
{
	ll n;
	cin>>n;
	cout<<sol(n);
}
