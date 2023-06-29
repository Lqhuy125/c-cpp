#include<bits/stdc++.h>
using namespace std;

const int maxn=1e6+5;
int a[maxn], b[maxn];
int cnt[3];
void solve(){
    
    int n;
        cin >> n;
        cnt[0] = cnt[1] = cnt[2] = 0;
        int res = 0, max_a = 0, flag_1 = 0, flag_max = 0;;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
            cnt[a[i] % 3] ++; 
            res = max(res, a[i] / 3);
            max_a = max(max_a, a[i]);
            if(a[i] == 1) flag_1 = 1;
        }
        for(int i = 1; i <= n; i ++) {
            if(max_a - 1 == a[i]) {
                flag_max = 1;
            }
        }
        if(cnt[1] == cnt[2] && cnt[1] == 0)
            cout << res << '\n';
        else if(cnt[2] == 0 || cnt[1] == 0)
            cout << res + 1 << '\n';
        else if(max_a % 3 == 0)
            cout << res + 1 << '\n';
        else if(max_a % 3 == 1 && !flag_1 && !flag_max)
            cout << res + 1 << '\n';
        else
            cout << res + 2 << '\n';
}

int main(){

	solve();
    
    return 0;
}
