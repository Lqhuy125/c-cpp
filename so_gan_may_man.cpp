#include<iostream>
using namespace std;

int n,m[14]={6,8,66,68,86,88,666,668,686,688,866,868,886,888};
int main()
{
    cin>>n;
    for(int i=0;i<14;i++)
    {
        if(n%m[i]==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
