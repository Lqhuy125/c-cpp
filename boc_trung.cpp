#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    if(n==s && n==t)
        cout<<1<<endl;
    else
        cout<<n-min(s,t)+1<<endl;
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
// 
//#ifdef LOCAL 
//#include "template/debug.h"
//#else 
//#define dbg(args...) 
//#endif
// 
//int main() { 
//  ios::sync_with_stdio(false);
//  cin.tie(0);
//  int tt;
//  scanf("%d", &tt);
//  while (tt--) {
//    int n, a, b;
//    scanf("%d %d %d", &n, &a, &b);
//    if (n <= a and n <= b) { 
//      printf("1\n");
//    } else if (a + b == n) { 
//      printf("%d\n", max(a, b) + 1);
//    } else {
//      printf("%d\n", max(a, b) - (a + b - n) + 1);
//    }
//    dbg("Done\n");
//  }
//  return 0;
//}
