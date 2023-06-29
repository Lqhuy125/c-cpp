/*  Rambo co mot chuyen du lich den sao hoa va o day anh ta da tim duoc mot cai Hotel de nghi trong vong N ngay. Cach tinh chi phi cua Hotel nay nhu sau:

X vnd cho mot ngay doi voi K ngay dau tien
Y vnd cho mot ngay tu ngay thu K + 1 den ngay cuoi cung.
Hay giup Rambo tinh chi phi phai tra de nghi o Hotel trong N ngay nhe

Input:
Dau vao gom 4 so nguyen N, K, X, Y voi (1=N,K=10000) va (1=X<Y=10000)
Output:
Dau ra la tong chi phai can phai tra cua Rambo*/#include<stdio.h>

int main()
{
	int N, K, X, Y;
	scanf("%d",N);
	scanf("%d",K);
	scanf("%d",X);
	scanf("%d",Y);
	if ( N <= K ){
		printf("%d", N * X);
		}else {
		printf("%d", K * X + (N - K) * Y);
		}

}

