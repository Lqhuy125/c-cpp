#include <stdio.h>
int main (){
    int thang, nam;
    scanf("%d", &thang);
    scanf("%d", &nam);
    switch (thang)
    {
    	case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
    	  printf(" Thang nay co 31 ngay");
    	break;
    	
    	case 4:
		case 6:
		case 11:
		case 9:
		printf("Thang nay co 30 ngay");
		
		case 2:
			if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0) 
			{ printf ("Thang nay co 29 ngay");
			} else {printf("Thang nay co 28 ngay");}
    }
    	
}
