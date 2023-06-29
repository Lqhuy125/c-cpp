#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
#define de(x) cout << #x << " is " << x << endl;
#define de2(x,y) cout << #x << " is " << x << " " << #y << " is " << y << endl;
#define de3(x,y,z) cout << #x << " is " << x << " " << #y << " is " << y << " " << #z << " is " << z << endl;
#define dearr(v) {for (auto i:v) cout << i << " "; cout << endl;}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--){
		map<char,int>mp;
		string s;
		cin >> s;
		if (s.size()&1) cout << "NO\n";
		else {
			string s1,s2;
			for (int i=0; i<s.size()/2; ++i)
				s2+=s[i];
			for (int i=s.size()/2; i<s.size(); ++i)
				s1+=s[i];
			if (s1==s2) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
