#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], d1=0,d2=0,d=0;
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n-1; i++)
	{
		if(a[i]<a[i+1]) d++;
		
		else if (a[i]>a[i+1]) d1++;
		
		else if (a[i]==a[i+1]) d2++;
	}
	if ( d==0 && d1!=0 && d2==0 ) printf("Day don dieu giam ngat\n");
	if ( d==0 && d1!=0 && d2!=0 ) printf("Day don dieu giam\n");
	if ( d!=0 && d1==0 && d2==0 ) printf("Day don dieu tang ngat\n");
	if ( d!=0 && d1==0 && d2!=0 ) printf("Day don dieu tang\n");
	if ( d2 == n-1) printf("Day bang nhau\n");
	if (d!=0 && d1!=0) printf("Day khong don dieu\n");
}
