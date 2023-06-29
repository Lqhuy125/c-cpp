#include<bits/stdc++.h>
using namespace std;
bool sx(int a,int b)
{
	return a>b;
}
int main()
{
    int n,cnt1[7]={},cnt2[7]={},a[100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	cnt1[a[i]]++;
    	cnt2[a[i]]++;
    	if(cnt1[a[i]]>1){
    		i--;
    		n--;
		}
	}
	sort(cnt1+1,cnt1+7,sx);
	for(int i=1;i<=3;i++)
	   for(int j=1;j<=n;j++)
	      if(cnt1[i]==cnt2[a[j]])
	      {
	      	cout<<a[j]<<" ";
	      	cnt2[a[j]]=-1;
	      	break;
		  }
}
