#include<iostream>

using namespace std;

int main()
{
	int N,S;
	int d = 0;
	cin >> N >> S;
	int Z;
	for (int i=0;i<=N;i++)
	{
	 	for (int j=0;j<=N;j++)
	 	{
	 		Z = S - i - j;
	 		if (Z>=0 && Z <=N)
	 		d++;
	 	}
	}
	cout << d;
}
