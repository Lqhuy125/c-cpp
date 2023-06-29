#include <stdio.h>

int UCLN(int ts, int ms)
{	int ucln;
    while (ts != ms )
	{
		if (ts > ms) {ts =ts - ms;}
		else {ms = ms - ts;}
		ucln = ts;
    }
    return ucln;
}
int main ()
{
	int t,n[30];
	do
	{
		scanf("%d", &t);
	}while(t<0 || t>20);
	for (int i = 0; i<t;i++)
	{
		scanf("%d", &n[i]);
	}
	for (int i = 0; i<t;i++)
	{	
		int ts = 1, ms = 1;
		if (n[i] == 1) { printf("1/1\n"); continue;}
		for (int j = 2; j<=n[i];j++)
		{
			ts = ts*j+ms;
			ms = ms*j;
		}
		printf("%d/%d\n", ts/UCLN(ts,ms) , ms/UCLN(ts,ms) );
	}
}

