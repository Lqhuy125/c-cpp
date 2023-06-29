#include <iostream>
using namespace std;

int main()
{
	int n,a, anew;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a;
		cout << a;
		while(a>0)
		{
			anew = anew*10 + a%10;
			a /= 10;
		}
		cout << " -----> " << anew << endl;
	}
}

