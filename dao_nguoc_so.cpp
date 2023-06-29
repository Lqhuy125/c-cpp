#include <stdio.h>
// Dao nguoc mang khong co so 0 o dau
/*
long long renum(long long n) 
{
    long long renum = n%10; // lay so cuoi
    n = n/10; // bo so cuoi
    long long last;
    while (n>0)
    {
        last = n%10;
        n/=10;
        renum = renum*10 + last; 
    }
    
}
*/
void renum(long long n) // Dao nguoc mang co co so 0 o dau
{
	while (n>0)
	{
		long long renum = n%10;
		n/=10;
		printf("%lld", renum);
	}
}
int main()
{
    long long n;
    scanf("%lld", &n);
    //printf("%lld", renum(n));
    renum(n); 
}
