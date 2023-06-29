#include <stdio.h>

int main ()
{
	int n,m,d=0;
	scanf("%d%d", &n,&m);
	if (n==0 || (n<m && m <= 1)) printf("ERROR");
	else 
	{
		while (m>n)
		{
			if (m%2==0)
			{
				d++; 
				m/=2; // du kien de bai n*=2 => m/=2
			}else
			{
				d++;
				m++; // du kien de bai n-=1 => m+=1
			}
		}
		printf("%d", d+n-m);
	}
	return 0;
}

