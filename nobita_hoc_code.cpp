#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main(){
      int n,k,ans=0;
      cin>>n>>k;
      int a[100005]={};
      for(int i=1;i<=n;i++) cin>>a[i], a[i]+=a[i-1];
      for(int i=1;i<n;i++)
         for(int j=n;j>i;j--){
         	if(j-i+1<ans) break;
         	if((a[j]-a[i-1])%k==0) ans=max(ans,j-i+1);
         }
      cout<<ans;
    
      
}
