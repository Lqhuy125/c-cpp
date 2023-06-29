//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    long long int a,b,c,d,t;
//    cin>>t;
//    while(t--){
//        cin>>a>>b>>c>>d;
//        if (a<=b){
//            cout<<b<<endl;
//        }
//        if(a>b && c>d){
//            long long int e=ceil((1.0*(a-b))/(c-d));
//            cout<<b+e*c<<endl;
//        }
//        if(a>b && c<d){
//            cout<<-1<<endl;
//        }
//        if(a>b && c==d){
//            cout<<-1<<endl;
//        }
//    }
// 
//}

#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=a)cout<<b<<endl;
    else if(d>=c)cout<<-1<<endl;
    else cout<<b+(a-b + c-d - 1)/(c-d)*c<<endl;
    
  return 0;
}
