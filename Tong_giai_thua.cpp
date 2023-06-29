#include <iostream>
using namespace std;

int giaithua(int a)
{
	long s = 1;
	for(int i = 1; i<=a; i++)
	{
		s *= i;
	}
	return s;
}
int main()
{
	long n, s=0;
	cin>> n;
	// s = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n
	for (int i = 1; i<=n ; i++)
	{
		s += giaithua(i); 
	}
	cout<< "S = " << s<<endl;
}

