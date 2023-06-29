#include <bits/stdc++.h>
using namespace std;

int lastDigit(int a, int b)
{
    int lastDigit = 1;
        for (int i = 0; i < b; i++) 
        {
            int digit = lastDigit * a;
            lastDigit  = digit % 10;
        }
    return lastDigit;
}
int main ()
{
	long long a,b;
	cin>>a>>b;
	cout<<lastDigit(a,b);
}


