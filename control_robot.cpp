#include <bits/stdc++.h>
using namespace std;

string sol(string start, string directions)
{
    int d;
    string a[] = {"B", "DB", "D", "DN", "N", "TN", "T", "TB"};
    for (int i = 0; i < 8; ++i){
    	if (start == a[i])
        {
            d = i;
            break;
        }
	}
    for (int i = 0; i < directions.length(); ++i){
    	if(directions[i] == 'T') --d;
    	else ++d;
	}
    if(d < 0)
    	d = (d % 8) + 8;
    else 
    	d %= 8;
    return a[d];
}

int main ()
{
	string s,d;
	cin>>s>>d;
	cout<<sol(s,d);
}
