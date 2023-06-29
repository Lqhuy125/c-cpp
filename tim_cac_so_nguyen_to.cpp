#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int ans = 1;
		if(i==0||i==1) continue;
		for(int j = 2; j<=sqrt(i); j++)
		{
			if(i%j== 0) {
				ans = 0;
				break;
			}
		}
		if(ans == 1) 
			cout << i << endl;
	}
}
