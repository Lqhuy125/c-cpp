#include <bits/stdc++.h>
using namespace std;

void	solve()
{
    int s, i, e; 
	cin >> s >> i >> e;
    int res;
    res = (e+i-s+2)/2;
    if (res < 0) res = 0;
    res = max(0, e-res+1);
    cout << res << endl;
}

int main ()
{
	int t;
	cin>>t;
	while(t--){ solve();}
}


