#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, d=0;
	cin >> n;
	if (n<=1) cout << n << " khong la SNT";
	else
	{
		for (int i = 2; i<=sqrt(n); i++)
		{
			if (n%i==0) d++;
		}
		if (d==0) cout<<n<<" la SNT";
		else cout << n << " khong la SNT";
	}
	
}

