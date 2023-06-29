#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
{
    int n, k;
    cin>>n>>k;
    int x, sum = 0;
    for(int i = 0; i < n; i++){
      cin>>x;
      sum += x;
    }
    if(sum - k <= 0){
      cout<<0;
    }
    else{
      cout<< sum-k;
    }
  }
}   


