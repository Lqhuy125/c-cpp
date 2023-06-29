#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	
	cout << "UCLN " << a << " va " << b << ": " << __gcd(a,b) << endl;
	cout << "BCNN " << a << " va " << b << ": " << (a*b)/__gcd(a,b);
}

