#include <stdio.h>
int main()
{
	int x,y,a;
    
	a: scanf("%d%d", &x,&y);
	if (x>y) {
		printf("Decrescente\n"); goto a;
	}
	else if (x<y) {
		printf("Crescente\n"); goto a;
	}
	else if (x == y) return 0;
}
