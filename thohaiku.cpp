#include <stdio.h>
#include <string.h>

int main (){
	char kytu[19];
	
	for (int i = 0; i < 19; i++)
	{
		scanf("%c", &kytu[i]);
	}
	kytu[5] = ' ';
	kytu[13] = ' ';
	for (int i = 0; i < 19; i++)
	{
		printf("%c", kytu[i]);
	}
}

