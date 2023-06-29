#include <bits/stdc++.h>
using namespace std;
int sol(string str)
{
    int max = 0;
    for (int i = 0; i < str.size(); i++) 
        for (int j = i + 1; j < str.size(); j++) 
            if (str[i] == str[j] && j - i > max) max = j - i;
    return max + 1;
}
int main ()
{
	string s;
	cin>>s;
	cout<<sol(s);
}


