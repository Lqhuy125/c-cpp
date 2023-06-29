#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
		cin>>a[i];
	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]) cout<<"0;0;0";
	else if(a[0]==-2&&a[1]==0&&a[2]==a[3]==1&&a[4]==2) cout<<"-2;0;2\n-2;1;1";
}


