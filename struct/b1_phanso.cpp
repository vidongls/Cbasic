#include <iostream>
#include<string>
using namespace std;
//---------- Định nghĩa ---------------
struct phan_so
{
	int tuso;
	int mauso;
};
typedef phan_so ps;
//----------- Nguyên mẫu hàm -----------
void nhap_1_ps(ps& p);
void nhap_ds_phanso(ps ds_phanso[], int n);
void xuat(ps p);
void xuat_ds_phanso(ps ds_phanso[], int n);
int ucln(int a, int b);
void rut_gon(ps& p);
void rut_gon_ds(ps ds_phanso[], int n);
ps max_phanso(ps ds_phanso[], int n);
ps tong_phanso(ps ps1, ps ps2);
ps tong_ds_phanso(ps ds_phanso[], int n);
void them_ps(ps ds_phanso[], int& n, int vt, ps x);
void xoa_ps(ps ds_phanso[], int& n, int vt);
int main()
{
	ps ds_phanso[100];	int n = 0;
	bool check = true;
	while (check)
	{
		system("cls");
		cout << "------------ Lua chon -------------"<<endl;
		cout << "1 .Them phan so vao danh sach" << endl;
		cout << "2. Xuat danh sach phan so " << endl;
		cout << "3. Rut gon phan so"<<endl;
		cout << "4. Phan so lon nhat trong danh sach"<<endl;
		cout << "5. Tong cac phan so" << endl;
		cout << "6. Them vao vi tri" << endl;
		cout << "7. Xoa vi tri" << endl;
		cout << "8. Thoat" << endl;
		int lc;
		cout << "Nhap lua chon :"; cin >> lc;
		switch (lc)
		{
		case 1: {
			do
			{
				cout << "Nhap so luong phan so: ";
				cin >> n;
			} while (n > 100 || n <= 0);
			nhap_ds_phanso(ds_phanso,n);
			break;
		}
		case 2: {
			if (n == 0) break;
			cout << "Danh sach phan so la: "<<endl;
			xuat_ds_phanso(ds_phanso,n);
			system("pause");
			break;
		}
		case 3: {
			if (n == 0) break;
			cout << "Danh sach sau khi rut gon la: "<<endl;
			rut_gon_ds(ds_phanso,n);
			system("pause");
			break;
		}
		case 4: {
			if (n == 0) break;
			cout << "Phan so lon nhat la: ";
			xuat(max_phanso(ds_phanso, n));
			system("pause");
			break;
		}
		case 5:{
			if (n == 0) break;
			cout << "Tong cac phan so la: ";
			xuat(tong_ds_phanso(ds_phanso, n));
			system("pause");
			break;
		}
		case 6: {
			if (n == 0) break;
			int vt;
			ps x;	
			do
			{
				 cout << "Nhap vi tri can them :"; cin >> vt;
				 if (vt > n || n < 0)
				 {
					 cout << "Khong hop le !" << endl;
				 }
			} while (vt > n || n < 0);
			cout << "Nhap phan so can them :"<<endl;
			nhap_1_ps(x);
			them_ps(ds_phanso, n, vt, x);
			break;
		}
		case 7: {
			if (n == 0) break;
			int vt;
			do
			{
				cout << "Nhap vi tri can xoa :"; cin >> vt;
				if (vt >= n || n < 0)
				{
					cout << "Khong hop le !" << endl;
				}
			} while (vt >= n || n < 0);
			xoa_ps(ds_phanso, n, vt);
			break;
		}
		case 8: {
			int x;
			cout << "Ban co muon thoat!" << endl;
			cout << "\t\t1. Yes"; cout << "\t\t2. No\t";	 cin >> x;
			if (x == 1)
			{
				check = false;
				break;
			}
		}
		}
	}
	system("pause");
}

void nhap_1_ps(ps& p) {
	// ========= Nhap =========
	cout << "Nhap tu so: ";	cin >> p.tuso;
	do
	{
		cout << "Nhap mau so: "; 
		cin >> p.mauso; 
		if (p.mauso == 0) cout << "Mau so khong hop le !!" << endl;
	} while (p.mauso ==0);
}
void nhap_ds_phanso(ps ds_phanso[],int n){
	for (int i = 0; i < n; i++)
	{
		cout << "---------------------" << endl;
		cout << "Phan so thu: " << i << endl;
		nhap_1_ps(ds_phanso[i]);
	}
}
void xuat(ps p) {
	cout <<  p.tuso << "/" << p.mauso << endl;
}
void xuat_ds_phanso(ps ds_phanso[], int n) {
	cout << "--------- Danh sach phan so -----------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan so thu " << i <<" la: ";
		xuat(ds_phanso[i]);
	}
}				   
int ucln(int a, int b) {
	int tam = 0;
	while (a % b != 0)
	{
		tam = a % b;
		a = b;
		b = tam;
	}
	return b;
}
void rut_gon(ps &p) {
	int luu_uc = ucln(p.tuso, p.mauso);
	p.tuso = p.tuso / luu_uc;
	p.mauso = p.mauso / luu_uc;
}
void rut_gon_ds(ps ds_phanso[], int n) {
	//----------- Rut gon -------------
	for (int i = 0; i < n; i++)
	{
		rut_gon(ds_phanso[i]);
		xuat(ds_phanso[i]);
	}
}
ps max_phanso(ps ds_phanso[], int n) {
	int a, b;
	ps max = ds_phanso[0];
	for (int i = 0; i < n; i++)
	{
		a = max.tuso * ds_phanso[i].mauso;
		b = ds_phanso[i].tuso * max.mauso;
		if (a < b) {
			max = ds_phanso[i];
		}
	}
	return max;
}
ps tong_ds_phanso(ps ds_phanso[], int n) {
	ps tong;
	tong.tuso = 0;
	tong.mauso = 1;
	for (int i = 0; i < n; i++)
	{
		tong.tuso = tong.tuso * ds_phanso[i].mauso + tong.mauso * ds_phanso[i].tuso;
		tong.mauso = tong.mauso * ds_phanso[i].mauso;
	}
	rut_gon(tong);
	return tong;
}
void them_ps(ps ds_phanso[], int &n,int vt,ps x) {
	for (int i = n; i > vt; i--)
	{			
		ds_phanso[i] = ds_phanso[i - 1];
	}
	ds_phanso[vt] = x;
	n++;
}
void xoa_ps(ps ds_phanso[], int& n, int vt) {
	for (int i = vt; i < n - 1; i++)
	{
		ds_phanso[i] = ds_phanso[i + 1];
	}
	n--;
}