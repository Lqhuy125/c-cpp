#include <iostream>
#include <string>
int rev(int x)
{
	int nnew = 0;
	while(x%10!=0)
	{
		nnew = nnew*10 + x%10;
		x /= 10;
	}
	return nnew;
}
using namespace std;

int main()
{
	int n, nnew;
	cin >> n;
	if (n == rev(n) ) cout << "la so thuan nghich"<<endl;
	else cout << "khong la so thuan nghich"<<endl;
}

