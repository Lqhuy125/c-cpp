#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long n;
	cin>>n;
	if(n%8==0){
		cout<<n/2+n/8<<" "<<n/4<<" "<<n/8;
	}
	else cout<<-1;
}


