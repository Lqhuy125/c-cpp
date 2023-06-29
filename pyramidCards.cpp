#include <bits/stdc++.h>
using namespace std;

int pyramidCards(int n){
	int cnt=0;
	while(n--){
		cnt += 2*(n+1) + n;
	}
	return cnt;
}
int main ()
{
	int n;
	cin>>n;
	cout<<pyramidCards(n);
}


