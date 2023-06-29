#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <string.h>

int main ()
{
	int n, m, i;
	cin>>n>>m;
	int a[100005]={}, x;
	while(n--){
		cin>>x;
		a[x]++;
	}
	for(i=1; i<=100000; i++)
		a[i]+= a[i-1];
	while(m--){
		cin>>x;
		cout<<a[x]<<endl;
	}
}


