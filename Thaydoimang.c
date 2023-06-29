#include <stdio.h>
int main ()
{
    int N[20];
    
    for (int i = 0; i < 20; i++)
    {
        scanf("%d\n", &N[i]);
    }
    for (int i = 0; i < 10; i++)
    { 
		int thay = N[i];
       	N[i] = N[20 - i - 1] ;
         N[20-i-1] = thay;
    }
    for(int i = 0; i<20; i++)
    {	printf("N[%d] = ", i);
        printf("%d\n", N[i]);
        
    }
}