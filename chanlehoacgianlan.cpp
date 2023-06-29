#include <stdio.h>

int main (){
	int p,j1,j2,r,a;
	scanf("%d%d%d%d%d", &p,&j1,&j2,&r,&a);
	int sum = j1 + j2;
	// nguoi 1 chon chan, nguoi 2 chon le
	if (p == 1)
	{
		if ( sum % 2==0 && r == 0 && a == 0)
		{
			printf("Cau thu 1 chien thang!");
		} else if ( sum % 2==0 && r == 1 && a == 0)
		{
			printf("Cau thu 1 chien thang!");
		} else if ( sum % 2==0 && r == 0 && a == 1)
		{
			printf("Cau thu 1 chien thang!");
		} else if ( sum % 2==0 && r == 1 && a == 1)
		{
			printf("Cau thu 2 chien thang!");
		}
		else if (sum % 2 != 0 && r == 0 && a == 0 )
		{
			printf("Cau thu 2 chien thang!");
		}
		else if (sum % 2 != 0 && r == 1 && a==0)
		{
			printf("Cau thu 1 chien thang!");
		}else if (sum % 2 != 0 && r == 0 && a == 1 )
		{
			printf("Cau thu 2 chien thang!");
		}else if ( sum % 2 !=0 && r == 1 && a == 1)
		{
			printf("Cau thu 2 chien thang!");
		}
	// nguoi 1 chon le, nguoi 2 chon chan
	} else if (p == 0)
	{
		if ( sum % 2 !=0 && r == 0 && a==1)
		{
			printf("Cau thu 1 chien thang!");
		}
		else if (sum % 2 == 0 && r == 1 && a==0)
		{
			printf("Cau thu 1 chien thang!");
		}
		else if (sum % 2 == 0 && r == 1 && a == 1 )
		{
			printf("Cau thu 2 chien thang!");
		}
		else if ( sum % 2 == 0 && r == 0 && a == 0)
		{
			printf("Cau thu 2 chien thang!");
		}
		else if ( sum % 2 !=0 && r == 1 && a == 0 )
		{
			printf("Cau thu 1 chien thang!");
		}
		else if ( sum % 2 !=0 && r == 1 && a == 1 )
		{
			printf("Cau thu 2 chien thang!");
		}
		else if ( sum % 2 == 0 && r == 0 && a ==1)
		{
			printf("Cau thu 2 chien thang!");
		}
		else if ( sum % 2 !=0 && r == 0 && a == 0 )
		{
			printf("Cau thu 1 chien thang!");
		}
	}
	
}

