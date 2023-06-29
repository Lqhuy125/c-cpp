#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m,a;
	ll d1[100001]={0},d2[100001]={0};
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		d1[a]++;
	}
	cin>>m;
	for(ll i=0;i<m;i++)
	{
		cin>>a;
		d2[a]++;
	}
	for(ll i=1;i<=10001;i++)
	{
		if(d1[i]>0||d2[i]>0)
			if(d1[i]!=d2[i]) cout<<i<<" ";
	}
	return 0;
}
