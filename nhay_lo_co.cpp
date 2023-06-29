#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool sol(int x1, int v1, int x2, int v2)
{
    if ((x1 < x2 && v1 < v2) || (x1 > x2 && v1 > v2))
        return false;
    if ((x1 == x2 && v1 != v2) || (x1 != x2 && v1 == v2))
        return false;
    if (x1 == x2 && v1 == v2)
        return true;
    int x = abs(x1 - x2);
    int v = abs(v1 - v2);
    if (x % v == 0) return true;
    else return false;
}
int main ()
{
	ll x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if(sol(x1,v1,x2,v2) == true) cout<<"YES";
	else cout<<"NO";
}

