#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int N = 32005, t;
	cin>>t;
	int a[N];
	while(t--){
		for(int x = 0; x * x <= N; ++x) {
	        for(int y = x; x * x + y * y <= N; ++y) {
	            for(int z = y; x * x + y * y + z * z <= N; ++z) {
	                for(int t = z; x * x + y * y + z * z + t * t <= N; ++t) {
	                    a[x * x + y * y + z * z + t * t]++;
	                }
	            }
	        }
	    }
	    for(int i=1;i<=t;++i){
	    	cout<<"Test Case#"<< i <<": "<<a[i]<<endl;
		}
	    
    }
}


