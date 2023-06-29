#include <iostream>
#define pass 4.0
using namespace std;
int main()
{
//	float t = 5.5;
//	if (t>pass) cout << " SV qua mon " << endl;
//	else cout << " SV truot mon " << endl;

/*
	Viet  chuong trinh tinh binh phuong thoa man
	a. la so le
	b. chia het cho 5 
*/
	int a;
	string msg;
	cout << "Nhap a = ";
	cin >> a;
//	if (a%2!=0 && a%5==0) cout << "a^2 = " << a*a << endl;
//	else cout << "a khong thoa man " << endl;

	// su dung: bien = (dk) ? bieu thuc 1 : bieu thuc 2;
	
	(a>pass) ? cout << "SV qua mon" << endl : cout << "SV truot mon" << endl;
	
	msg = (a>pass) ? "SV qua mon" : "SV truot mon";
	cout << msg << endl;
}
