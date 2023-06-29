#include <stdio.h>
#include <string.h>

int main() 
{
	int t;
	scanf("%d", &t); 
	while(t--)
	{ 
		int k; 
		char s[100];
		scanf("%d", &k);
		fflush(stdin);
		gets(s); 
		for(int i = 0; i < strlen(s); i ++)
		{ 
			for(int j = 1; j <= k; j++) 
			printf("%c", s[i]);
		} 
		printf("\n"); 
	} 
}
