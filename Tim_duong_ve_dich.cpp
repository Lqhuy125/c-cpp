#include <stdio.h>
#include <math.h>
#include <string.h>
int t, kq[100];

int main()
{
   cin>>t;
    while(t--){
       int a, b, x, dis, ans;
       cin>>a>>b;
       if(a > b) {
	       	int temp = a;
		    a  = b;
		    b = temp;
	   }
       if((a == 1 && b > 2) || (b == 1 && a > 2)) kq[i]=-1;
       else if(a == b || a+1 == b){
       		cout<< a+b-2 << "\n";
       }
       else{
         x = 2*a+1;
         dis = b - a - 1;
         if(dis%2==1){
            cout<< x + (dis-1)*2 + 3;
         }
         else{
            ans = x + dis*2;
         }
         count<<ans-2<<"\n";
       }
   }
 
}


