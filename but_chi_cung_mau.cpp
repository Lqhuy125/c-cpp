#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    int a[n], count=1,max=1;
    for (int i=1; i<n; i++) {
        cin>>a[i];
        if (a[i] == a[i-1]) {
        	count++;
            if (count > max) {
            	max=count;
            }
        }
        else {
        	a[i-1] = a[i];
        	if (count > max) {
            	max = count;
            }
            count = 1;
        }
    }
    cout << n-max;
}
