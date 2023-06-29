#include <iostream>
using namespace std;

int main()
{
	int n, d[100]={0};
	cin >> n;
	for (int i = 2; i<=n ; i++)
	{
		while (n%i==0)
		{
			d[i]++;
			n/=i;
		}
		if (d[i]>=1)
		{
			for (int j = 0; j<d[i]; j++)
			{
				cout << i << " x ";
			}
			
		}
	}
}

