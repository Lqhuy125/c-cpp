#include <bits/stdc++.h>
using namespace std;

int sol(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++) 
    {
        int temp = ans * a;
        ans  = temp % 10;
    }
    return ans;
}
int main ()
{
	int a,b;
	cin>>a>>b;
	cout<<sol(a,b);
}


