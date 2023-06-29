#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false),cin.tie(NULL);
    long long t,n, a[100];
    cin>>t;
    for(int i=0;i<t;i++){
        long long k=1,temp = 0;
        cin>>n;
        while(temp < n){
            temp += k;
            k++;
        }
        if(temp == n+1)
            a[i]=k;
        else
            a[i]=k-1;
    }
    for(int i=0;i<t;i++){
		cout<<a[i]<<endl;
	}
    	
    return 0;
}

