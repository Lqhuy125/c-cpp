#include <iostream>
using namespace std;
int main()
{
 	int n;
	cin >> n;
	int a[100][100];
	
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=n; j++)
		{
			cin >> a[i][j];
		}
	}
		
	for (int i =1; i<=n; i++)
	{
		for (int j = 1; j<=n; j++)
		{
			cout << a[i][j] <<"\t";
		}
		cout << "\n";
	}
		
			
			
}
