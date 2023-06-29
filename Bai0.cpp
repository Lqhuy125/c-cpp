#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct Thisinh{
	int msv;
	char name[100], truong;
	float diem;
	
};
int main()
{	int n;
	
	Thisinh sv[100];
	printf("Nhap so sinh vien");
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{	printf("nhap ten: ");
		fflush(stdin);
		gets(sv[i].name);
		printf("nhap ma: ");
		scanf("%d", &sv[i].msv);
		printf("nhap diem: ");
		scanf("%f", &sv[i].diem);
		printf("nhap truong: ");
		scanf("%s", &sv[i].truong);
		printf("\n\n");
	}
	// tim diem max
	int max1 = 0;
	for (int i = 0; i<n;i++)
	{	
		
		if (sv[i].diem > max1 )
		{
			max1 = sv[i].diem;
		}
	}
	for (int i = 0; i<n; i++)
	{
		if (sv[i].diem == max1)
		{
			printf("%s", sv[i].name);
		}
	}
	// sap xep diem
	Thisinh temp;
	for (int i = 0; i<n-1; i++)
	{
		
		for (int j = i+1; j<n; j++)
		{
			if (sv[j].diem<sv[i].diem)
			{
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	for(int i = 0; i<n; i++)
	{
		printf("\nsinh vien co diem tu thap den cao: ")
		printf("%3s", sv[i].name);
	}
	// tim va in ra ng co diem >5 va la trg B
	
	for (int i = 0; i<n;i++)
	{
		if ( sv[i].truong == 'B' && sv[i].diem > 5)
		{
			printf("\n sv truong B co so diem >5 la: %s ", sv[i].name);
		}
	}
	// thong ke so sv moi truong
	int sum = 0; int sum1 = 0; int sum2 = 0;
	
	for (int i = 0; i<n;i++)
	{	
		if ( sv[i].truong == 'B')
		{
			sum++;
		}else if ( sv[i].truong == 'C')
		{
			sum1++;
		}else if ( sv[i].truong == 'A')
		{
			sum2++;
		}
	}
	printf("\nSo sv truong A la %d", sum2);
	printf("\nSo sv truong B la %d", sum);
	printf("\nSo sv truong C la %d", sum1);
	
	if (sum1 > sum && sum1 > sum2)
	{
		printf("\ntruong %c co nhieu thi sinh nhat", 'C');
	}else if (sum2 > sum && sum2 > sum1)
	{
		printf("\ntruong %c co nhieu thi sinh nhat", 'A');
	}else if (sum == sum1 && sum1 == sum2)
	{
		printf("\n3 truong thi sinh bang nhau");
	} // con thieu truong hop
	
	for (int i = 0; i < n; i++)
	{
		int maxx = sv[0].diem;
		if (sv[i].diem > maxx && sv[i].truong == 'B')
		{
			printf("\nsv co diem cao nhat truong B la %s ", sv[i].name);
		}
	}
	
}
