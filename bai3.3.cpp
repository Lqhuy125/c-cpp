#include <bits/stdc++.h>
using namespace std;

//a
//chau au
int main ()
{
	//a
	//--------------------------------Chau Au
	int n;
	cout<<"Nhap toc do cua moi kenh(Kbit/s): ";
	cin>>n;
	double time_E1,E[6], RE1;
	time_E1 = 125*pow(10,-6); // thoi gian khung E1
	//So bit trong moi khung: 8(bit) * 32 = 256(bit/frame)
	RE1=1/time_E1;
	E[1]= 30*n+2*n;
	E[2]= 4*E[1] + 4*n;
	E[3]= 4*E[2] + 9*n;
	E[4]= 4*E[3] + 28*n;
	E[5]= 4*E[4] + 124*n;
	
	cout<<"------------------------------------------------------------------------------------------\n";
	cout<<"Toc do phat cua 1 bit/ 1 byte trong cac luong so E1, E2, E3, E4, E5 theo chuan CHAU AU la: \n";
	cout<<"------------------------------------------------------------------------------------------\n";
	cout<<"Cap ghep dau tien ghep "<< 30*1 << " kenh thoai, moi kenh co toc do " << n <<"Kbit/s cung voi "<< 2*n <<"Kbit/s tu ma (cho bao hieu và dong bo) tao luong du lieu noi tiep E1 = "<<E[1]<<"Kbit/s\n";
	for(int i=2;i<=5;i++){
		cout<<"Cap ghep thu "<< i << " nhan 4 luong E"<< i-1 << " cung voi "<< E[i]-4*E[i-1] <<"Kbit/s tu ma (cho bao hieu và dong bo) tao luong du lieu noi tiep E"<< i <<" = "<<E[i]<<"Kbit/s\n";
	}
	
	
	//--------------------------------Bac My
	double time_T1,T[6], RT1;
	time_T1 = 125*pow(10,-6); // thoi gian khung T1
	//So bit trong moi khung: 8(bit) * 24 + 1 = 193(bit/frame)
	RT1=1/time_T1; // frame/s
	
	T[1]= (8*24+1)*8000/1000;
	T[2]= 4*T[1] + 17*8;
	T[3]= 7*T[2] + 69*8;
	T[4]= 6*T[3] + 720*8;
	T[5]= 2*T[4] + 1476 *8;
	cout<<"------------------------------------------------------------------------------------------\n";
	cout<<"Toc do phat cua 1 bit/ 1 byte trong cac luong so E1, E2, E3, E4, E5 theo chuan BAC My la: \n";
	cout<<"------------------------------------------------------------------------------------------\n";
	cout<<"Cap ghep dau tien ghep gom 24 kenh thoai toc do 64 Kbit/s cung voi "<< 1 <<" bit co'` co' toc do 8 Kbit/s (cho bao hieu và dong bo) tao luong du lieu T1 = "<<T[1]<<"Kbit/s\n";
	printf("Cap ghep thu %d nhan %d luong E%d cung voi %d Kbit/s tu ma (cho bao hieu và dong bo) tao luong du lieu noi tiep T%d = %.lf Kbit/s = %.2lf Kbyte/s\n",2,4,1,17*8,2,T[2], T[2]/8000);
	printf("Cap ghep thu %d nhan %d luong E%d cung voi %d Kbit/s tu ma (cho bao hieu và dong bo) tao luong du lieu noi tiep T%d = %.lf Kbit/s = %.2lf Kbyte/s\n",3,7,2,69*8,3,T[3], T[3]/8000);
	printf("Cap ghep thu %d nhan %d luong E%d cung voi %d Kbit/s tu ma (cho bao hieu và dong bo) tao luong du lieu noi tiep T%d = %.lf Kbit/s = %.2lf Kbyte/s\n",4,6,3,720*8,4,T[4], T[4]/8000);
	printf("Cap ghep thu %d nhan %d luong E%d cung voi %d Kbit/s tu ma (cho bao hieu và dong bo) tao luong du lieu noi tiep T%d = %.lf Kbit/s = %.2lf Kbyte/s\n",5,2,4,1476 *8,5,T[5], T[5]/8000);
	
	
	//b
	cout<<"------------------------------------------------------------------------------------------\n";
	cout<<"Toc do phat cua 1 bit/ 1 byte trong cac luong so STM-1, STM-4, STM-16: \n";
	cout<<"------------------------------------------------------------------------------------------\n";
	double Rstm[16];
	int i=1;
	while(i<=16){
		Rstm[i]=64*i*9*270;
		i*=4;
	}
	printf("Toc do phat 1 bit cua luong so STM-1, STM-4, STM-16 lan luot la: %.lf Kbit/s, %.lf  Kbit/s, %.lf  Kbit/s\n", Rstm[1], Rstm[4], Rstm[16]);
	printf("Toc do phat 1 byte cua luong so STM-1, STM-4, STM-16 lan luot la: %.2lf Kbyte/s, %.2lf Kbyte/s, %.2lf Kbyte/s\n", Rstm[1]/8000, Rstm[4]/8000, Rstm[16]/8000);
}



