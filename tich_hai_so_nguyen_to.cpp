#include <bits/stdc++.h>
using namespace std;

bool ktrasnt(int n){
    if(n<2) return false;
    else 
	    for(int i=2;i<=sqrt(n);i++){
	        if(n%i==0) return false;
	    }
    return true;
}
int main ()
{
	int n,check=0;
	cin>>n;
	for(int i=2;i<n;i++){
        if(n%i==0){
            if(ktrasnt(i)==true&&ktrasnt(n/i)== true){
				check=1;
			}
        }
    }
    if(check!=0) cout<<"true";
    else cout<<"false";
}
