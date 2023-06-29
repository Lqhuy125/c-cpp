#include <bits/stdc++.h>
using namespace std;

long long findMaxPrimeWithNDigits(int number)
{
    long long res;
    for(long long i = pow(10,number); i > 2; i--){
        long long count = 0;
        for(int j = 2; j <= sqrt(i); j++){
            if (i%j==0) count++;
        }
        if(count == 0 ){
            res = i;
            break;
        }
    }
    return res;
}
int main ()
{
	int t;
	cin>>t;
	cout<<findMaxPrimeWithNDigits(t);
}


