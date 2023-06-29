#include <bits/stdc++.h>
using namespace std;

int main() {
    
	    string s;
	    cin>>s;
	    int kq=INT_MAX;
	    int x=0,y=0,z=0;
	    int d1=count(s.begin(),s.end(),'1');
	    int d2=count(s.begin(),s.end(),'2');
	    int d3=count(s.begin(),s.end(),'3');
	    if(d1==0||d2==0||d3==0)
	    	cout<<0<<endl;
	    else
	    {
		    for(int i=0;i<s.length();i++)
		    {
		        if(s[i]=='1')
		        	x=i+1;
		        else if(s[i]=='2')
		        	y=i+1;
		        else if(s[i]=='3')
		        	z=i+1;
		        if(x>0&&y>0&&z>0)
		        {
		        	int p=min(x, min(y,z));
		        	int q=max(x, max(y,z));
		         	kq=min(kq,abs(p-q));
		        }
		    }
		    cout<<kq+1<<endl;
	    }
}
