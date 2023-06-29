#include <iostream>
#include <math.h>
#define delta b*b-4*a*c
#define x1  ( (-b + sqrt(delta))/(2*a) )
#define x2  ( (-b - sqrt(delta))/(2*a) )
#define x -b/(2*a)
using namespace std;

int main()
{
	float a,b,c;
	cin >> a >> b >> c;
	if (delta < 0) cout << "Phuong trinh vo nghiem" << endl;
	else if (delta==0)
		cout<<"Phuong trinh co nghiem kep x1 = x2 = "<<x<<endl;
	else 
		cout<<"Phuong trinh co 2 nghiem:"<<endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
}

