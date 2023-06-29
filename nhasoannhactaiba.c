#include <stdio.h>

void tang(int a[])
{	int dem = 0;
	for (int i = 0; i < 8 - 1; i++) 
	{
		if ( a[i+1] > a[i])
		dem++;
	}
	if ( dem == 7) 
		printf("TANG");
}
void giam(int a[])
{	int dem = 0;
	for (int i = 0; i < 8 - 1; i++)
	{
		if ( a[i+1] < a[i])
		dem++;
	}
	if ( dem == 7)
	printf("GIAM");
}
void khongbiet1(int a[])
{	int dem = 0;
	for (int i = 0; i < 8 - 1; i++)
	{
		if ( a[i+1] < a[i] || a[i+1] > a[i] )
		dem++;
	}
	if ( dem != 7)
	printf("KHONGBIET");
}

int main ()
{   int a[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    
    tang(a);
    giam(a);
    khongbiet1(a);
    
}