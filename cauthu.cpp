#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
typedef struct cauthu{
	char HT[100], DB;
	int SBT;
};
int main (){
	cauthu a[100];
	int n,h,j,k;
	int TongA = 0; int TongB = 0; int TongC = 0;
	printf("nhap so cau thu: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{	printf("nhap ten: ");
		fflush(stdin);
		gets(a[i].HT);
		printf("Nhap so ban cau thu %d: ", i);
		scanf("%d", &a[i].SBT);
		printf("Nhap doi bong cua cau thu %d: ", i);
		scanf("%s", &a[i].DB);
	}
	for (int i = 1; i <= n; i++)
	{
		printf("ten cau thu %d la: %s", i, a[i].HT);
		printf("\nso ban cau thu %d la %d", i, a[i].SBT);
		printf("\ndoi bong cua cau thu %d la %c", i, a[i].DB);
	}
	// tong so ban thang moi doi
	
	for (int i = 1; i<=n; i++)
	{
		if (a[i].DB == 'A')
		{
			TongA += a[i].SBT;
		} else if (a[i].DB == 'B')
		{
			TongB += a[i].SBT;
		} else if (a[i].DB == 'C')
		{
			TongC += a[i].SBT;
		}
	}
	printf("\nTong so ban cua doi A la: %d", TongA);
	printf("\nTong so ban cua doi B la: %d", TongB);
	printf("\nTong so ban cua doi C la: %d", TongC);
	
	int max = TongA;
	if (TongB > max)
	{
		printf("\nDoi B ghi nhieu ban nhat");
	} else if (TongC > max)
	{
		printf("\nDoi C ghi nhieu ban nhat");
	} else
	{
		printf("\nDoi A ghi nhieu ban nhat");
	}
	int min1 = INT_MAX;
	int min2 = INT_MAX;
	int min3 = INT_MAX;
	for (int i = 1; i<=n; i++)
	{
		if (a[i].SBT < min1 )
		{
			min1 = a[i].SBT;
			h = i;
		}
	}
	for (int i = 1; i<=n; i++)
	{
		if (a[i].SBT == min1)
		{
			continue;
		} else if (a[i].SBT < min2)
		{
			min2 = a[i].SBT;
			j = i;
		}
	}
	for (int i = 1; i<=n; i++)
	{
		if (a[i].SBT == min2 )
		{	
			continue;
		}else if (a[i].SBT == min1)
		{
			continue;
		}else if (a[i].SBT < min3)
		{
			min3 = a[i].SBT;
			k = i;
		}
	}
	printf("\n3 cua thu ghi it ban thang nhat la %s = %d %3s = %d %3s = %d", a[h].HT, min1, a[j].HT, min2 a[k].HT, min3);
	
}

