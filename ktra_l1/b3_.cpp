#include <iostream>
#include<string>
#include<fstream>
using namespace std;

struct sinh_vien
{
	string hoten;
	string gioitinh;
	string ngaysinh;
	int msv;
	float mac, daiso, cpp;		
};
typedef struct sinh_vien sv;
//-------------------------
void nhap_ds_sv(sv ds_sv[], int n);
//----------------------
void xuat_ds_sv(sv ds_sv[], int n);
//----------------------
void xoa(sv ds_sv[], int& n, int vt);
//------------------------
void nhapdiem(sv& s);
void them_diem(sv ds_sv[], int msv, int n);
void xuat_diem(sv s);
void xuat_diem_ds(sv ds_sv[], int n);
//=====-----------------------
istream& operator >> (istream& is, sv& s);
ostream& operator << (ostream& os, sv s);
int main()
{
	sv ds_sinhvien[100];	int n = 0;
	bool check = true;
	while (check)
	{
		system("cls");
		cout << "1. Them sinh vien" << endl;
		cout << "2. Xuat danh sach sinh vien" << endl;
		cout << "3. Xoa" << endl;
		cout << "4. Nhap diem" << endl;
		cout << "5. Thoat" << endl;
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
				if (sl <= 0)
				{
					cout << "So luong sv khong hop le!" << endl;
				}
			} while (sl <= 0);
			for (int i = 0; i < sl; i++)
			{
				cin.ignore();
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
			int vt = 0;
			cout << "Moi nhap vi tri can xoa: "; cin >> vt;
			cout << "\t\t--------- Danh sach xoa ---------" << endl;
			xoa(ds_sinhvien, n, vt);
			xuat_ds_sv(ds_sinhvien, n);
			system("pause");
			break;
		}
		case 4: {
			int msv;
			cout << "Nhap MSV: "<<endl; cin >> msv;
			them_diem(ds_sinhvien, msv, n);	
			xuat_ds_sv(ds_sinhvien, n);
			xuat_diem_ds(ds_sinhvien,n);
			system("pause");
			break;
		}
		case 5: {
			int l;
			cout << "Ban co thuc su muon thoat ?" << endl;
			cout << "1. Yes\t\t2. No" << endl;	 cin >> l;
			if (l == 1)check = false;
			break;
		}
		}
	}
}
istream& operator >> (istream& is, sv& s) {
	cout << "Nhap MSV: "; cin >> s.msv;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, s.hoten);
	cout << "Nhap gioi tinh: "; getline(cin, s.gioitinh);
	cout << "Nhap ngay sinh: "; getline(cin, s.ngaysinh);
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
	cout << "MSV: " << s.msv << endl;
	cout << "Ho ten: " << s.hoten << endl;
	cout << "Gioi tinh: " << s.gioitinh << endl;
	cout << "Ngay sinh: " << s.ngaysinh << endl;
	return os;
}

void xuat_ds_sv(sv ds_sv[], int n) {

	for (int i = 0; i < n; i++)
	{
		cout << "\t\t----------- SV " << i << " ---------" << endl;
		cout << ds_sv[i];
	}
}
void xoa(sv ds_sv[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		ds_sv[i] = ds_sv[i + 1];
	}
	n--;
}

void nhapdiem(sv& s)
{
	cout << "Nhap diem Mac-Lenin :"; cin >> s.mac;
	cout << "Nhap diem Dai so: "; cin >> s.daiso;
	cout << "Nhap diem C++:"; cin >> s.cpp;
}

void them_diem(sv ds_sv[], int msv, int n) {
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (ds_sv[i].msv == msv) {
			found = true;
			cout << "\nThem sinh vien co MSV = " << msv <<endl;
			nhapdiem(ds_sv[i]);
			break;
		}
	}
	if (found == false) {
		cout << "Sinh vien khong ton tai !"<<endl;
	}
}
void xuat_diem(sv s)
{
	cout << "Dai so " <<s.daiso << endl;
	cout << "Mac-Lenin " << s.mac << endl;
	cout << "C++" << s.cpp << endl;
}
void xuat_diem_ds(sv ds_sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		xuat_diem(ds_sv[i]);
	}
}