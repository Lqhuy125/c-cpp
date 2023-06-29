#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int minn=min(a,b);
		int maxx=max(a,b);
		int op=a+b;
		if(a==0 && b==0)
		   cout<<"YES"<<endl;
		else if(op%3==0 && 2*minn>=maxx)
		   cout<<"YES"<<endl;
		else
		   cout<<"NO"<<endl;
	}
		
}


