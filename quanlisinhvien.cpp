#include <iostream>
#include <cstring>

using namespace std;
typedef struct sv{
	char name[100], gioitinh[10], hocluc[20];
	int id, tuoi;
	float diemToan, diemLy, diemHoa, diemTB = 0;
};
void nhapn(int &n)
{
	cout << "Nhap so luong sinh vien: \n";
	cin >> n;
}
void diemTB(sv &sv)
{
	sv.diemTB = (sv.diemHoa+sv.diemLy+sv.diemToan)/3;
}
void hocluc(sv &sv)
{
	if (sv.diemTB > 8) strcpy(sv.hocluc, "Gioi");
	else if(sv.diemTB >= 6.5) strcpy(sv.hocluc, "Kha");
    else if(sv.diemTB >= 5) strcpy(sv.hocluc, "Trung binh");
    else strcpy(sv.hocluc, "Yeu");
}
void Nhapthongtinsv(sv &sv, int n)
{
		cout <<"Nhap ID: "; cin >> sv.id;
		cout << "Nhap ten: "; fflush(stdin); gets(sv.name);
		cout << "Nhap gioi tinh: "; cin>>sv.gioitinh;
		cout << "Nhap tuoi: "; cin >> sv.tuoi;
		cout << "Nhap diem Toan: "; cin >> sv.diemToan;
		cout << "Nhap diem Ly: "; cin >> sv.diemLy;
		cout << "Nhap diem Hoa: "; cin >> sv.diemHoa;
		diemTB(sv);
		hocluc(sv);  
}
void Nhapsv(sv a[100], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout<<"Nhap sinh vien thu " << i << endl;
		Nhapthongtinsv(a[i],n); 
	}
}
void Xuatthongtinsv(sv &sv, int n)
{
	cout << "ID: " << sv.id << endl;
	cout << "Ten: " << sv.name << endl;
	cout << "Gioi tinh: " << sv.gioitinh << endl;
	cout << "Tuoi: " << sv.tuoi << endl;
	cout << "Toan: " << sv.diemToan << endl;
	cout << "Ly: " << sv.diemLy << endl;
	cout << "Hoa: " << sv.diemHoa << endl;
	cout << "Diem TB: " << sv.diemTB<< endl;
	cout << "Hoc luc: " << sv.hocluc<< endl;
	cout << "--------------------------------"<<endl;
}
void Xuatsv(sv a[100], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << "STT: " << i << endl;
		Xuatthongtinsv(a[i], n);
	}
}

int main()
{
	sv a[100];
	sv temp;
	int m,n,k,id, deleteid;
	char newname[20] = {0};
	nhapn(n);
    Nhapsv(a,n);
    while(true)
    {
	    cout << "1. Them sinh vien.\n";
		cout << "2. Cap nhat sinh vien theo ID.\n";
		cout << "3. Xoa sinh vien theo ID.\n";
		cout << "4. Tim kiem sinh vien theo ten.\n";
		cout << "5. Sap xep sinh vien theo diem trung binh.\n";
		cout << "6. Sap xep sinh vien theo ten.\n";
		cout << "7. Hien thi danh sach sinh vien.\n";
		cout << "Moi ban nhap ...\n";
		cin >> m;
		switch (m)
		{
			case 1:
				cout << "Them sinh vien: " << endl;
				k = 1;
				while(k--)
				{
					for (int i = n; i<=n;i++)
					{
						Nhapthongtinsv(a[i], n); 
					}
					n++;
				}
				break;
			case 2:
				if (n>0)
				{
					cout << "Cap nhat thong tin sinh vien theo ID: " << endl;
					cout << "Nhap ID can update: "; cin>> id;
					for (int i = 0; i<n; i++)
					{
						if (a[i].id == id) Nhapthongtinsv(a[i], n);
						else cout << "Khong co ID phu hop!"<<endl; 
							cout << "--------------------------------"<<endl;
					}
				}else
				{
					cout << "Danh sach sinh vien trong!"<<endl;
					cout << "--------------------------------"<<endl;
				} 
				break;
			case 4:
				if (n>0)
				{
					cout << "Tim kiem sinh vien theo ten: " <<endl;
					cout << "Ten sinh vien can tim: "; cin >> newname;
					for (int i = 0; i<n; i++)
					{
						if (strcmp(newname, a[i].name) == 0) Xuatthongtinsv(a[i], n);
						else {
							cout << "Khong tim thay ten sv can tim"<<endl;
							cout << "--------------------------------"<<endl;
						}
					}
				}else 
				{
					cout << "Danh sach sinh vien trong!"<<endl;	
					cout << "--------------------------------"<<endl;
				}
				break;
			case 3:
				if (n>0)
				{
					cout << "Xoa sinh vien theo ID: " <<endl;
					cout << "Nhap ID sv can xoa: "; cin >> deleteid;
					for (int i = 0; i<n; i++)
					{
						if (deleteid == a[i].id)
						{
							a[i] = a[i+1];
						}
						n--;
					}
				}else 
				{
					cout << "Danh sach sinh vien trong!"<<endl;
					cout << "--------------------------------"<<endl;
				}
				break;
			case 5:
				cout << "Da sap xep sv theo diem trung binh! " << endl;
				cout << "Moi ban in ra ds update." <<endl;
				cout << "--------------------------------"<<endl;
				for (int i = 0; i<n-1; i++)
				{
					for (int j = i+1; j<n; j++)
					{
						if (a[j].diemTB < a[i].diemTB)
						{
							temp = a[i];
							a[i] = a[j];
							a[j] = temp;
						}
					}
				}
				break;
			case 6:
				
				break;
			case 7:
				Xuatsv(a,n); 
				cout << "--------------------------------"<<endl;
				break;
			default:
				cout << "Moi ban nhap lai...\n";
		}
	}
	
	
}

