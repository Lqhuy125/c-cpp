#include <bits/stdc++.h>
using namespace std;
int main ()
{
	double M[12][12], s=0;
	int col;
	char x;
	cin>>col>>x;
	for (int i = 0; i<12; i++)
	{
		for (int j = 0; j<12; j++)
		{
			cin>>M[i][j]
		}
	}
	for (int i = 0; i<12; i++)
	{
		s += M[i][cot];
	}
	if(x=='S') printf("%.1f", s);
	if(x=='M') printf("%.1f", 1.0*s/12);
}

