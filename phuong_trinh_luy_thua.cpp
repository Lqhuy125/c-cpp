#include <stdio.h>
#include<math.h>
float m(float n)
{
   float i;
//   for(i = 1; pow(i,i) <= n; ++i);
   for(i=0; pow(i,i) <=n; i = i + 0.000001);  
   return i;
}
int main()
{
   float n ;
   scanf("%f",&n);
   printf("%.4f",m(n));
   return 0;
}
