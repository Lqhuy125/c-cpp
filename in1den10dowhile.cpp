#include <stdio.h>

int main (){
	int a;
    do {
    	
    	scanf("%d", &a);
    	if (a <= 100 && a >= 0){
    		printf("Dung");
		} else {
			printf("sai");
		}
	} while (a >= 100 || a < 0);
}

