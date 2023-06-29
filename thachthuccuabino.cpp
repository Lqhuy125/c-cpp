#include <stdio.h>
int main (){

	int n,a;
	scanf("%d", &n);
	int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < n; i++)
	{
	    scanf("%d", &a);
		if (a % 2 == 0) sum++;
		if (a % 3 == 0) sum1++;
		if (a % 4 == 0) sum2++;
		if (a % 5 == 0) sum3++;
	}
	printf("%d Multiplo(s) de 2\n", sum);
	printf("%d Multiplo(s) de 3\n", sum1);
	printf("%d Multiplo(s) de 4\n", sum2);
	printf("%d Multiplo(s) de 5\n", sum3);
}

