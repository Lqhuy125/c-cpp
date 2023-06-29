#include <stdio.h>
void truyenthamtri(int a, int b)
{
    int gan = a;
    a = b;
    b = gan;
    
}
void truyenthamchieu(int *a, int *b)
{
   int tam = *a;
	*a = *b;
	*b = tam;
    
}
int main()
{   int a,b;
    scanf("%d%d", &a,&b);
    printf("gia tri ban dau la a = %d b = %d", a,b);
    
    truyenthamtri(a,b);
    printf("\na = %d b = %d ",a,b);
    
    truyenthamchieu(&a,&b);
    printf("\na = %d b = %d ",a,b);
    
}