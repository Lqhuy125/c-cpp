#include <stdio.h>

int main (){
   int d,m,y,nd,nm,ny;
   scanf("%d/%d/%d", &d,&m,&y);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ){
    	if (d == 31 && m == 12){
		   nd = 1;
		   nm = 1;
		   ny = y+1;
		} else {
			nd = d +1;
			nm = m + 2;
		}  
	} else if  ( m == 4 || m == 6 || m == 9 || m == 11){
		 if (d == 30 ) {
		 	nd = d +1;
		 	nm = m+1;
	    }
	} else if (m == 2 && y % 4 == 0 && y % 100 != 0 ){
		if (d = 29){
			nd = 1;
			nm = m +1;
		} else if (d = 28){
			nd = 1;
			nm = 1;
		}
	}
 printf("%d/%d/%d", nd,nm,ny);
}


