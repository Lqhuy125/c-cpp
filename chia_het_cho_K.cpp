#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,k;
    cin>>n>>k;
    if(n%k==0)
        cout<<"1";
    else if(k%n==0)
    	cout<<k/n;
    else if(n>k)
    	cout<<"2";
    else
    	cout<<(k/n + 1);   
}


