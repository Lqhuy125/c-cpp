#include <iostream>

using namespace std;

void bai21(int n)
{
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		if (i%2==0) cout << i << endl;
	}
	for (int i = 0; i<n; i++)
	{
		if (i%2!=0) cout << i << endl;
	}
}
void bai22(int m)
{
	int s = 0;
	cin >> m;
	for (int i = 1; i<=m; i++)
	{
		s+=i;
	}
	cout << "S = " << s << endl;
}
void bai23(int n1)
{
	float s1 = 1;
	cin >> n1;
	for (int i = 2; i<=n1; i++)
	{
		s1+=1.0/i;
	}
	cout << "S1 = " << s1 << endl;
}
void bai26(int n2, int k)
{
	cin >> n2 >> k;
	int s = 0;
	for (int i=0; i<=n2; i++)
	{
		if (i%k==0) s+=i;	
	}
	cout << "s = " << s << endl;
}
void bai27(int n3)
{
	cin >> n3;
	int d = 0;
	cout << "Uoc so cua " << n3 << " la:";
	for (int i = 1; i<=n3; i++)
	{
		if (n3%i==0)
		{
			d++;
			cout << " " << i ;
		}
	}
	cout << "\n";
	cout << "Co " << d << " uoc so";
}
int main()
{
	int n,m,n1,n2,k,n3;
//	bai21(n);
//	bai22(m);
//	bai23(n1);
//	bai26(n2,k);
	//bai27(n3);
	  
}

