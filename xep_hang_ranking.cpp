#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int lst[n];
	for(int i=0;i<n;i++){
		cin>>lst[i];
	}
	int max1 = lst[0], max2 = lst[1], max3 = lst[3];
    if(max1 < max2)
        swap(max1, max2); 
    if(max1 < max3)
        swap(max1, max3);
    if(max2 < max3)
        swap(max2, max3);
    for(int i = 4; i < n; ++i){
        if(lst[i] > max1){
             max3 = max2;
             max2 = max1;
             max1 = lst[i];
        }
        if(lst[i] > max2 && lst[i] < max1){
            max3 = max2;
            max2 = lst[i];
        }
        if(lst[i] > max3 && lst[i] < max2)
            max3 = lst[i];
    }
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0 ; i < n; ++i){
        if(lst[i] == max1)
            ++cnt1;
        if(lst[i] == max2)
            ++cnt2;
        if(lst[i] == max3)
            ++cnt3;
    }
    cout<<"1st: "<<cnt1<<"\n"<<"2nd: "<<cnt2<<"\n"<<"3rd: "<<cnt3<<endl;
}


