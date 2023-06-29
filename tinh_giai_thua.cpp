#include <bits\stdc++.h>
using namespace std;

int main()
{
	long long n,GT = 1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		GT*=(n-i);
	}
	cout<<GT;
	
}
