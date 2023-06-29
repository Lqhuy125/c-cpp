#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
  while (y != 0)  {
    int t = y;
    y = x % y;
    x = t;
  }
  return x;
}
long long sol(int n, int a[])
{
    long long ans=a[0],min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min)    min=a[i];
        ans=gcd(ans,a[i]);
    }
    if(ans==1)
        return min;
    return ans;
}

int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<sol(n,a);
}


