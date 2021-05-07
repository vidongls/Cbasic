#include <iostream>
#include<string>
#include<fstream>
using namespace std;
//---------- Định nghĩa ---------------

struct sinh_vien
{
	string hoten;
	string gioitinh;
	int tuoi;
	float dtb;
};
typedef struct sinh_vien sv;
//-------------------------
void nhap_ds_sv(sv ds_sv[], int n);
//----------------------
void xuat_ds_sv(sv ds_sv[], int n);
//----------------------
void sapxep_dtb(sv ds_sv[], int n);
//------------------------
istream& operator >> (istream& is, sv& s);
ostream& operator << (ostream& os, sv s);
int main()
{
	sv ds_sinhvien[100];	int n = 0;
	bool check = true;
	while (check)
	{
		system("cls");
		cout << "1. Them sinh vien"<<endl;
		cout << "2. Xuat danh sach sinh vien" << endl;
		cout << "3. Sap xep sinh vien theo dtb" << endl;
		cout << "4. Thoat" << endl;
		int lc;
		cout << "Moi nhap lua chon: "; cin >> lc;
		switch (lc)
		{
		case 1: {
			cout << "-------------- Nhap SV --------------" << endl;
			
			int sl;
			do
			{
				cout << "Moi nhap so luong sinh vien :"; cin >> sl;
				if (sl <=0)
				{
					cout << "So luong sv khong hop le!" << endl;
				}
			} while (sl <=0);
			for (int i = 0; i < sl; i++)
			{	cin.ignore();
				sv s;
				cout << "\t\t----------- SV " << i << " ---------" << endl;
				cin >> s;
				ds_sinhvien[n] = s;
				n++;
			}
			break;
		}
		case 2: {
			if (n == 0)break;
			cout << "\t\t--------- Xuat SV ---------" << endl;
			xuat_ds_sv(ds_sinhvien, n);
			system("pause");
			break;
		}
		case 3: {
			if (n == 0)break;
			cout << "\t\t--------- Danh sach sau khi sap xep ---------"<<endl;
			sapxep_dtb(ds_sinhvien, n);
			xuat_ds_sv(ds_sinhvien, n);
			system("pause");
			break;
		}
		case 4: {
			int l;
			cout << "Ban co thuc su muon thoat ?"<<endl;
			cout << "1. Yes\t\t2. No"<<endl;	 cin >> l;
			if (l == 1)check = false;			  
			break;
		}
		}
	}
}
istream& operator >> (istream& is, sv& s) {
	cout << "Nhap ho ten: "; getline(cin, s.hoten);
	cout << "Nhap gioi tinh: "; getline(cin, s.gioitinh);
	cout << "Nhap tuoi: "; cin >> s.tuoi;
	cout << "Nhap diem: "; cin >> s.dtb;
	return is;
}
void nhap_ds_sv(sv ds_sv[], int n) {		
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cin >> ds_sv[i];
	}
}
ostream& operator << (ostream& os, sv s) {
	cout << "Ho ten: " <<  s.hoten << endl;
	cout << "Gioi tinh: " << s.gioitinh << endl;
	cout << "Tuoi: " << s.tuoi << endl;
	cout << "Diem tb: " << s.dtb << endl;
	return os;
}
void xuat_ds_sv(sv ds_sv[], int n) {
	
	for (int i = 0; i < n; i++)
	{
		cout << "\t\t----------- SV " << i << " ---------" << endl;
		cout << ds_sv[i];
	}
}
void sapxep_dtb(sv ds_sv[],int n){
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (ds_sv[i].dtb > ds_sv[j].dtb)
			{
				swap(ds_sv[i], ds_sv[j]);
			}
		}
	}
}	
