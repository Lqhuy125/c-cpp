#include <iostream>
using namespace std;

int main()
{
	int n, a,b;
	do
	{
		cout << "=====Menu=====" << endl;
		cout << "1. Cong hai so\n";
		cout << "2. Tru hai so\n";
		cout << "3. Nhan hai so\n";
		cout << "4. Chia hai so\n";
		cout << "0. Thoat\n";
		cout << "Nhap n = ";
		cin >> n;
		switch (n)
		{
			case 1:
				cout << "Ban da lua chon cong hai so!\n";
				cout << "Nhap a va b: ";
				cin >> a >> b;
				cout << a << " + " << b << " = " << (a+b) << endl;
				break;
			case 2:
				cout << "Ban da lua chon tru hai so!\n";
				cout << "Nhap a va b: ";
				cin >> a >> b;
				cout << a << " - " << b << " = " << (a-b) << endl;
				break;
			case 3:
				cout << "Ban da lua chon nhan hai so!\n";
				cout << "Nhap a va b: ";
				cin >> a >> b;
				cout << a << " * " << b << " = " << (a*b) << endl;
				break;
			case 4:
				cout << "Ban da lua chon chia hai so!\n";
				cout << "Nhap a va b: ";
				cin >> a >> b;
				cout << a << " / " << b << " = " << ((float)a/b) << endl;
				break;
			case 0:
				cout << "Ban da lua chon thoat chuong trinh\n";
				cout << "Cam on. Exit";
			default:
				cout << "Nhap sai. Nhap lai\n";
		}
	} while (n != 0);
	
}

