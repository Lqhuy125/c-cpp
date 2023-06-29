#include <stdio.h>

int main ()
{
	long a,b;
	scanf ("%ld%ld", &a,&b);
	printf("%ld+%ld=%ld\n",a,b,a+b);
	printf("%ld-%ld=%ld\n",a,b,a-b);
	printf("%ld*%ld=%ld\n",a,b,a*b);
	printf("%ld/%ld=%ld\n",a,b,a/b);
	printf("%ld%%%ld=%ld\n",a,b,a%b);
}

