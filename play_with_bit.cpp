#include <iostream>
#include <map>

using namespace std;

long long k;
long t, n;
long a[100500];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--) {
        map<long long, long long> cntNum;
        cin >> n >> k;
        for(long i = 1; i <= n; i++) {
            cin >> a[i];
        }
        long long ans = 0;
        for(long i = n; i >= 1; i--) {
            if(k >= a[i]) {
                ans += cntNum[a[i] ^ (k - a[i])];
            }
            cntNum[a[i]]++;
        }
        cout << ans << '\n';
    }
    return 0;
}
