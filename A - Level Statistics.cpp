#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n,i,j,flag=1;
        cin>>n;
        int x,y,x1,y1;
        cin>>x>>y;
        if(x<y)
            flag=0;
        for(i=1;i<n;i++)
        {
            cin>>x1>>y1;
            if(x1<x||y1<y||x1<y1||x1-x<y1-y)
                flag=0;
            else x=x1,y=y1;
        }
        if(flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}


