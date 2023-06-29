#include <bits/stdc++.h>
using namespace std;
    
int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool flag = false;
	for(int i=0;i<n-1;i++){
		if(a[i] >= a[i+1])
            flag = true;
        else{
			flag = false;
            break;
		}  
	}
	
    if(flag == false)
    {
		for(int i=0;i<n-1;i++){
			if(a[i] <= a[i + 1])
	            flag = true;
	        else{
				flag = false;
	            break;
			}
		}
	}
	if(flag==true) cout<<"YES";
	else cout<<"NO";
}


