#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0, odd=0;
	while(a[i] != 0){
        if(a[i] % 2 == 1)
            odd++;
        ++i;
    }
    cout<<odd;
}

