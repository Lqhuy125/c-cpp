#include <stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int h[n], m[n],o[n];
	for (int i = 0; i<n; i++)
	{
		scanf("%d%d%d", &h[i], &m[i], &o[i]);
	}
	for (int i=0;i<n;i++)
	{
		if(h[i]>10 && m[i]>10)
		{
			if (o[i] ==1)
			 printf("%d:%d - Canh cua mo ra!\n", h[i], m[i]);
			else if (o[i] == 0)
			 printf("%d:%d - Canh cua dong lai!\n", h[i], m[i]);
		}
		else if (h[i] <10 && m[i]<10)
		{
			if (o[i] ==1)
			 printf("0%d:0%d - Canh cua mo ra!\n", h[i], m[i]);
			else if (o[i]==0)
			 printf("0%d:0%d - Canh cua dong lai!\n", h[i], m[i]);
		}
		else if (h[i] <10 && m[i]>10)
		{
			if (o[i] ==1)
			 printf("0%d:%d - Canh cua mo ra!\n", h[i], m[i]);
			else if (o[i]==0)
			 printf("0%d:%d - Canh cua dong lai!\n", h[i], m[i]);
		}
		else if (h[i] >10 && m[i]<10)
		{
			if (o[i] ==1)
			 printf("%d:0%d - Canh cua mo ra!\n", h[i], m[i]);
			else if (o[i]==0)
			 printf("%d:0%d - Canh cua dong lai!\n", h[i], m[i]);
		}
			
	}
	return 0;
}

