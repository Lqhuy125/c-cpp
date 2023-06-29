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
//	ifstream in("inp3.in", ios::in);
//	ofstream out("out3.out", ios::out);
	int tc=1;
	cin >> tc;
	while (tc--){
	    int n;
		cin >> n;
		string a,b;
		cin >> a >> b;
		int d1,d2;
		int d=0;
		int i=0;
		
		for (i=0; i<n; i++){	
			d1=abs((int)a[i]-(int)b[i]); // 1 9 9 1
			if (b[i]>a[i]) d2=(int)a[i]+(10-(int)b[i]);
			else if (a[i]==b[i]){
				d1=0;
				d2=0;
			}
			else d2=(int)b[i]+(10-(int)a[i]);
			if (d1<=d2) d+=d1;
			else d+=d2;	
		}
		cout << d << endl;
	}
}
