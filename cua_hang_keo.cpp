#include <bits/stdc++.h>
using namespace std;

int sellCandies1(int n) {
    for(int i=n/6;i>=0;i--)
        for(int j=n/9;j>=0;j--)
            for(int k=n/20;k>=0;k--)
                if(i*6+9*j+20*k==n)
                    return i+j+k;
    return -1;
}
int main ()
{
	int n;
	cin>>n;
	cout<<sellCandies1(n);
}


