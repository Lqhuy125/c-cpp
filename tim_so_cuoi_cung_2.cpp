#include"bits/stdc++.h"
using namespace std;
string Chuyen(string s){
	long sum=0;
	for(long i=0;i<s.size();i++) sum+=(s[i]-48);
	return to_string(sum);
}
int main(){
      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
      string s;
      cin>>s;
      while(s.size()!=1){
      	s=Chuyen(s);
      }
      cout<<s;
}
