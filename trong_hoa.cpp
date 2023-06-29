#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int m,n;
	cin>>m>>n;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];	
	}
	int count=0;
    if(m==1 && arr[0]==0) 
		count++;
    else if(m==2 && arr[0]==0 && arr[1]==0) 
		count++;
    else{
    	for(int i=0;i<m;i++){
        	if(arr[i]==0 && arr[i-1]==0 && arr[i+1]==0) count++;
    	}
	}
    if(count >= n) cout<<"YES";
    else cout<<"NO";
}


