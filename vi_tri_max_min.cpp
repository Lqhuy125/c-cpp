#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, min = 0, max = 0;;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; ++i){
        cin>>a[i];
    }
	for(int i = 0 ; i < n ; ++i){
        if(a[i] > a[max])
            max = i;
        if(a[i] < a[min])
            min = i;
    }
    cout<<min<<" "<<max;
}


