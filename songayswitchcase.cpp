#include <stdio.h>

int main (){
     int y,m;
    scanf("%d%d", &m, &y);
     
     switch (m){
     	case 1:
		  case 3:
		   case 5:
		   case 7:
		    case 8:
			 case 10:
			  case 12:
		 printf("Co 31 ngay");
		 break;
		case 2: 
		   if (y % 4 == 0 && y % 100 != 0){
		   	printf("co 29 ngay");
		  }else {
	  	   printf("co 28 ngay");}
		break;
		
		case 4:
		 case 6:
		  case 9: 
		  case 11:
			printf("Co 30 ngay");
			break;
		default : return 0;
     }
     
}

