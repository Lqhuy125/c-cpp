#include <stdio.h>
#include <string.h>
typedef struct labai
{
	int la11,la12,la21;
	int la13,la22,la23;
};
int main ()
{
	int tonga[100];
	int tongb[100];
	int count = 0; int count1 = 0;
	labai a[100], b[100];
	int n;
	int A = 1;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d%d%d", &a[i].la11,&a[i].la12,&a[i].la13);
		scanf("%d%d%d", &b[i].la21,&b[i].la22,&b[i].la23);
	}
	for (int i = 0; i<n; i++)
	{	
		tonga[i] = 0;
		tongb[i] = 0;
		tonga[i] = a[i].la11 + a[i].la12 + a[i].la13;
		tongb[i] = b[i].la21 + b[i].la22 + b[i].la23;
		printf("%d ", tonga[i]);
		if (tonga[i] > 10 && tonga[i]<=20)
		{
			tonga[i] = tonga[i]-10;
		}
		else if (tonga[i] >20 && tonga[i]<=30) 
		{
			tonga[i] = tonga[i]-20;
		}
		
		if (tongb[i] > 10 && tongb[i]<=20) 
		{
			tongb[i] = tongb[i]-10;
		}
		else if (tongb[i] >20 && tongb[i]<=30) 
		{
			tongb[i] = tongb[i]-20;
		}
		
		if (tonga[i] > tongb[i]) count++;
		if (tonga[i] < tongb[i]) count1++;
	
	}
	printf("%d %d", count, count1);
	return 0;
}

