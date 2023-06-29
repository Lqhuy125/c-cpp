#include <stdio.h>

int main (){
	int a;
	Nhap:
	scanf("%d", &a);
    if (a > 100) goto Nhap;
    
    int i = 10;
    for (i; i < a; i++)
    {printf(" %d ", i);
	}
	
}

