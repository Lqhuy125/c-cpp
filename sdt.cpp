#include<stdio.h>
#include<math.h>	
#include<string.h>

int main()
{
    int n,k,i;
    char a[100];
    gets(a);
    if (strlen(a) == 10 && a[0]== 0 && (a[strlen(a)-1]!=0 && a[strlen(a)-1]!=4 && a[strlen(a)-1]!=7 ) )printf ("YES\n");
    else printf("NO\n");

	return 0;	
}
