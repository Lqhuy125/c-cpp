#include <bits/stdc++.h>
using namespace std;

string decipher(string cipher)
{
    int j = 0;
    string s;
    for(int i = 0; i < cipher.size()-1; ){
        if(cipher[i] == '9'){
            s += (char)stoi(cipher.substr(i, 2));
            i += 2;
        }
        else{
            s += (char)stoi(cipher.substr(i, 3));
            i += 3;
        }
    }
    return s;
}

int main ()
{
	string s;
	cin>>s;
	cout<<decipher(s);
}


