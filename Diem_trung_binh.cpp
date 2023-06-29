#include <stdio.h>
typedef struct ds{
	char ten[30];
	int diem;
};
int main ()
{
	struct ds a[1000];
	int n;
	double tbc = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		fflush(stdin);
		gets(a[i].ten);
		scanf("%d", &a[i].diem);
		tbc+=a[i].diem;
	}
	tbc/=n;
	printf("DIEM TRUNG BINH %.1lf\n", tbc);
	for (int i = 0; i<n;i++)
	{
		if (a[i].diem >= tbc)
		{
			printf("%s %d\n", a[i].ten, a[i].diem);
		}
	}
}

