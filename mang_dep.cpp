#include<bits/stdc++.h>
using namespace std;

int n,a,cnt_l,cnt_c;
int main()
{
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cin >> a;
        if(a % 2 == 0)
            cnt_c++;
        else
            cnt_l++;
    }
    int res = min(cnt_c,cnt_l);
    cout << res;
}
