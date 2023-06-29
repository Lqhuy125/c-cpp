#include <bits/stdc++.h>
using namespace std;
int n;

int kiem_tra(int res)
{
    int ans=res;
    while(res)
    {
        ans+=res%10;
        res/=10;
    }
    if(ans==n)
        return 1;
    else
        return 0;
}

int main()
{
    cin>>n;
    for(int i=0;i<100;i++)
    {
        if(n-i<0)
            return 0;
        int kq=kiem_tra(n-i);
        if(kq==1)
        {
            cout<<n-i;
            return 0;
        }
    }
}
// 15 12
//12345667 12345641
//32462537 32462512
//534253124 534253087
//99999999 99999936

