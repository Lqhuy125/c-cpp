#include <iostream>
#include <cmath>
using namespace std;
int kiemtraSNT(int x)
{
	int d=0;
	if (x<=1) return 0;
	else
	{
		for (int i = 2; i<=sqrt(x); i++)
		{
			if (x%i==0) d++;
		}
		if (d==0) return 1;
		else return 0;
	}
}
int main()
{
	int n, d=0;
	cin >> n;
	int i = 2;
	cout << n << " SNT dau tien la: ";
	while (d<n)
	{
		if (kiemtraSNT(i) == 1 )
		{
			cout << i << " ";
			d++;
		}
		i++;
		
	}
}

