#include <bits/stdc++.h>
using namespace std;

int sol(int a, int b, int c, int d)
{
    double attempt[4];
    attempt[0] = double(a)/c - double(b)/d;
    attempt[1] = double(c)/d - double(a)/b;
    attempt[2] = double(d)/b - double(c)/a;
    attempt[3] = double(b)/a - double(d)/c;
    double max = attempt[0];
    int answer = 0;
    for (int i = 0; i < 4 ; i++)
    {
        if (attempt[i] > max) 
        {
            answer = i;
            max = attempt[i];
        }
    }
    return answer;
}
int main ()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<sol(a,b,c,d)<<endl;
}


