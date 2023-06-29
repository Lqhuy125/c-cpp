#include <stdio.h>
#include <string.h>
int main (){
	char a[100];
	int b[100] = {0}, d=0;
	scanf("%s", &a);
	for (int i = 0; i < strlen(a) ; i++)
	{
		int dadem=0;
		for (int j = 0; j<i; j++)
		{
			if (a[i] == a[j])
			{
				dadem = 1;
				break;
			}
		}
		if (dadem == 0)
		{
			for (int k=i; k<strlen(a); k++)
			{
				if (a[i] == a[k]) b[i]++;
			}
			if (b[i]%2!=0) 
			{
				d = -1;
				break;
			}
		}
		
	}
	if (d==-1) printf("No");
	else printf("Yes");
}

