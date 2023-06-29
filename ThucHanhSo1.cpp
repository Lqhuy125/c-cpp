#include <iostream>
using namespace std;

int main()
{
	/* bai1: ktra chan le am duong
	
	int n;
	cin >> n;
	// le hay chan
	(n%2==0) ? cout << n << " la so chan" << endl : cout << n << " la so le" << endl;
	// am hay duong
	(n>0) ? cout << n << " la so duong" << endl : cout << n << " la so am" << endl;
	
	*/
	/* bai2: so sanh
	
	int a,b;
	cin >> a >> b;
	(a>b) ? cout << a << " > " << b << endl : cout << a << " < " << b << endl;
	
	*/
	
	/* tim max cua 5 so. vd: ( 1 1 1 1 1) => k so nao max (1 1 1 1 2) => max = 2
	
	int a[6];
	for (int i = 0; i<5; i++)
	{
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i<5; i++)
	{
		if (a[i] > max )
		{
			max = a[i];
		}
	}
	if (max == (a[1] || a[2] || a[3] || a[4] || a[0]) ) cout << "khong co so nao lon nhat" << endl;
	else cout << "max = " << max << endl;
	
	*/
	/* 
	
	float a,b;
	cin >> a >> b;
	float s = a*b, c = (a+b)/2;
	cout << "S hcn = " << s << endl << "C hcn = " << c << endl;
	
	*/  
	
	/* Giai phuong trinh bac 1
	
	int a,b;
	cin >> a >> b;
	if ( a == 0) cout << "Phuong trinh vo nghiem " << endl;
	else if (b==0) cout<<"Phuong trinh vo so nghiem" << endl;
	else 
	{
		if (b == 0) cout << "x = 0" << endl;
		else cout << "x = " << -(float)b/a <<endl;
	}
	
	*/
}

