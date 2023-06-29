#include <stdio.h>
typedef struct point{
	float x, y;
};
int main ()
{
	point a[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%f%f", &a[i].x, &a[i].y);
	}
	for (int i = 0; i<n ; i++)
	{
		printf("(%.2f,%.2f) ", a[i].x, a[i].y);
	}


	return 0;
}

