
#include <bits/stdc++.h>
using namespace std;

bool ans(int n)
{
    if (n < 100) return false; 
	else
    {
        int t = n;
        int b = t % 10;
        while (t >= 10) t /= 10;
        int a = t;
        if (n % (10 * a + b) == 0) return true; 
		else return false;
    }
}
int main ()
{
	int t,n;
	cin>>t;
	string a[100];
	for(int i=0;i<t;i++){
		cin>>n;
		if(ans(n)==true) cout<<"YES"<<endl;
	 	else cout<<"NO"<<endl;
	}
	 
}


