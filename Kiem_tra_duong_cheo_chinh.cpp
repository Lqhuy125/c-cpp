#include<iostream>
#include<math.h>
#define maxm 100
#define maxn 100
using namespace std;

void nhap(int a[maxn][maxn],int &n)
{
 cout<<"nhap n: ";     cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
         cout<<"moi nhap phan tu ["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
         }
}
void xuat(int a[maxn][maxn],int n)
{
    for(int i=0;i<n;i++)
{
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<"   ";
            cout<<endl;}
}
int kiemtraduongcheochinh(int a[100][100], int n)
{
	int count = 0;
	for(int i=0; i<=n-1; i++)
	{ 
		if(a[i][i] < a[i+1][i+1] )
			count++;
	}
	if(count == n-1) return 1;
	else return 0;
}
int main()
{
    int a[maxn][maxn];int n,k;
    nhap(a,n);
    xuat(a,n);
    if(kiemtraduongcheochinh(a,n)==1)
    cout<<" ma tran co tang dan duong cheo chinh";
    else
    cout<<" ma tran khong tang dan duong cheo chinh";
}
