#include <stdio.h>
int max(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if ( a[i] > max)
		{
			max = a[i];
		}
	} return max;
}
int Sapxeptang(int a[], int n)
{	int sapxep;
	for (int i = 0; i < n; i++)
	{
		for(int j = i + 1;j < n; j++)
		{
			if (a[j] < a[i])
			{
			sapxep = a[i];
			a[i] = a[j];
			a[j] = sapxep;
			}
		}
	}
}
void printMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main ()
{
    int n;
    int a[100];

    printf("nhap vao so phan tu cua mang = ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {	  	
    	printf("a[%d] = ", i);
    	scanf("%d", &a[i]);
	}
	printf("\n day so sap xep la: ");
	Sapxeptang(a,n);
	for (int i = 0; i < n; i++)
    {
    	printf("%d ", a[i]);
	}
	
    
    

	printf("\nGia tri lon nhat la %d", max(a,n));
}
