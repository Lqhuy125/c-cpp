#include <stdio.h>


int main()
{
	double M[100][100];
	int hang;
	char x;
	int s = 0;
	scanf("%d", &hang);
	
	scanf("\n%c", &x);
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			scanf("%lf", &M[i][j]);
		}
	}
	for (int j = 0; j < 12; j++)
	{
		s = s + M[hang][j];
	}
	if(x=='S') 
    	printf("%.1f",s); 
	else  
    	printf("%.1f",1.0*s/12); 
}
