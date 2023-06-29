#include <iostream>
using namespace std;

int main()
{
	int a = 100, b = 200;
	int c = a+b, d = a-b, e = a*b, g = a%b;
	float f = (float)a/b;
	
	cout << "c = "  << c << endl;
	cout << "d = "  << d << endl;
	cout << "e = "  << e << endl;
	cout << "f = "  << f << endl;
	cout << "g = "  << g << endl;
	
	cout << (a<b) << endl;
	cout << (a<=b) << endl;
	cout << (a>b) << endl;
	cout << (a>=b) << endl;
	cout << (a==b) << endl;
	cout << (a!=b) << endl;
}
