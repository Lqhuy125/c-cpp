#include <stdio.h>

int main (){
	int a,b,c;
	int tien;
	int to1, to2, to3;
	scanf("%d%d%d", &a,&b,&c);
	scanf("%d", &tien);
	if (a*1+b*2+c*3 < tien) printf("KHONG DOI DUOC");
	else
	{
		while(tien>=1)
		{
			to3 = tien/(c*3)*c;
			tien = tien - soto3dong*3;
			to2 = tien/(b*2-tien);
			tien = tien - soto2dong*2;
			
		}
		printf("%d", to3 + to2 + to1);
	}
	

}

