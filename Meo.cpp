#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int t,a[1001];
    scanf("%d",&t);
   	for(int i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x, &y);
        int rem = y%x;
        int mul = y/x;
        if(y==1)
            a[i]=1;
        else if(x%2==0){
            if(rem == 0)
                a[i]=x;
            else
                a[i]=rem;
        }
        else{
            int mul1 = x/2;
            y--;
            int res = (y+(x % 2)*y/mul1)%x+1;
            a[i]=res;
        }
    }
    for(int i=0;i<t;i++){
		printf("%d\n",a[i]);
	}
 }


