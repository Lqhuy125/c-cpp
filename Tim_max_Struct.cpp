#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
	//cach1: Dai - de hieu
	int max = a[0].giatien;
	for (int i=0;i<n;i++)
	{
		if (a[i].giatien > max )
		{
			max = a[i].giatien;
		}
	}
	printf("Cuon sach co gia tien dat nhat la:\n");
	for (int i=0;i<n;i++)
	{
		if (a[i].giatien == max)
		{
			printf("|%20s|%20s|%20s|%20d|\n", a[i].masach, a[i].tensach, a[i].tentacgia, a[i].giatien);
		}
	}
	//cach2: Ngan - on ap
	sach max=a[0];
	for (int i=1;i<n;i++)
	{
		if (a[i].giatien > max.giatien)
		{
			max = a[i];
		}
	}
	printf("Cuon sach co gia tien dat nhat la:\n");
	printf("|%20s|%20s|%20s|%20d|\n", max.masach, max.tensach, max.tentacgia, max.giatien);
}


