#include <bits/stdc++.h>
using namespace std;

void sol(){
	int n;
	cin>>n;
	int a[1001],b[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]=0;
	}
	int d=0, c[1001];
	for(int i=1;i<=6;i++){
		if(b[i]==1){
			c[i]=0;
			d++;
		}
	}
	for(int i=0;i<d;i++){
		cout<<c[i]<<" ";
	}
}
int main ()
{
	sol();
}


