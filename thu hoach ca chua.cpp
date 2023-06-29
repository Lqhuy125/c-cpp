#include <stdio.h>

int n, k;
int a[100]; 
void xapxep(int a[100], int n)
{	int tg;
	for(int i=0; i<n-1; i++) 
    {
        for(int j=i+1; j<n; j++) 
        {
            if(a[i]<a[j]) 
            {   
                tg = a[i];
                a[i] = a[j]; 
                a[j] = tg; 
            } 
        } 
	}
}
void tong(int a[100], int n)
{	int i = 0;
    int s = 0;
	while(i<n) 
    {
        if(a[i]>0) 
        s += a[i]; 
        for(int j=i+1; j<n; j++) 
        a[j] -= k; 
        i++; 
    } 
    printf("%d", s);
}
int main() 
{   
    scanf("%d%d", &n, &k); 
    for(int i=0; i<n; i++) 
    {
    	scanf("%d", &a[i]);
	}
    xapxep(a,n); 
    tong(a, n); 
} 
