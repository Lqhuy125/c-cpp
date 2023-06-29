#include <iostream>
using namespace std;

int main()
{
	char choice;
	
	cout << "Dau la thu do cua Viet Nam\n";
	cout << "A. Ha Noi\n";
	cout << "B. HCM\n";
	cout << "C. Da Nang\n";
	cout << "D. Nghe An\n";
	cout << "Moi ban nhap dap an: \n";
	cin >> choice;
	switch (choice)
	{
		case 'A':
		case 'a':
			cout << "Chinh xac" << endl;
			break;
		case 'B':
		case 'b':
		case 'C':
		case 'c':
		case 'D':
		case 'd':
			cout << "Sai roi!" << endl;
			break;
		default:
			cout << "Dap an khong hop le" << endl;
			break;
	}
}

