#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
        ll int n, m, k;
        cin >> n >> m >> k;
        ll int cpp = n / k;
        if (m <= cpp)
            cout << m << endl;
        else
        {
            if ((m - cpp) % (k - 1) == 0)
                cout << cpp - (m - cpp) / (k - 1) << endl;
            else
                cout << cpp - (m - cpp) / (k - 1) - 1 << endl;
        }
}


