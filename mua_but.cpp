#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int x,y,s;
	cin>>x>>y>>s;
	int so_lan_mua = s/ (x + y);
    if (x >= s){
        cout<<s; 
    } else if (x + y >= s){
        cout<<x; 
    } else if (x + y < s){
        if (s % (x + y) == 0){
            cout<< x * so_lan_mua <<endl;
        } else {
            int n = s % (x + y);
            cout<< x * so_lan_mua + n<<endl;
        }
    }
}


