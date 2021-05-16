#include <iostream>
#include <fstream>
using namespace std;
//-----------cap phat----------
void cap_phat(int*& p, int ncu, int nmoi);
//-----------xu ly file--------
void load_file(int* &p, int& n);
void xuat_file (int *p, int n);
//-----------xu ly mang---------
void nhap_mang(int* &p, int &n);
void xuat_mang(int* p, int n);
void them(int*& p, int& n, int vt, int x);
void xoa(int*& p, int& n, int vt);	   
//---------so hoan thien --------------
bool check_hoan_thien(int n);
void them_hoan_thien(int*& p, int& n);
//---------so doi xung ----------------
int so_dao(int n);
bool check_doi_xung(int n);
void xoa_doi_xung(int* &p, int& n);
//----------Menu--------
void menu(int *a, int* p, int& n, int &n2);


void main()
{
	int* p = NULL; int n = 0;
	int* a = NULL; int n2 = 0;
	/*load_file(p, n);
	xuat_file(p, n);*/
	menu(a,p,n,n2);	
	system("pause");
}
void menu(int *a, int *p, int &n, int &n2) {
	bool check = true;
	while (check)
	{
		system("cls");
		//------ lua chon ----
		cout << "1. Load file" << endl;
		cout << "2. Nhap danh sach" << endl;
		cout << "3. Xuat danh sach" << endl;
		cout << "4. Them phan tu vao danh sach" << endl;
		cout << "5. Xoa phan tu trong danh sach" << endl;
		cout << "6. Them 0 truoc so hoan thien" << endl;
		cout << "7. Xoa so doi xung" << endl;
		cout << "8. Ktra gon song;" << endl;
		cout << "9. Thoat"<<endl;
		int lc;
		cout << "Nhap lc: "; cin >> lc;
		//----- xu ly----
		switch (lc)
		{
		case 1: {
			if (a == NULL) {
				load_file(a, n2);
				xuat_file(a, n2);
			}
			else {
				xuat_file(a, n2);
			}
			system("pause");
			break;
		}
		case 2:
		{
			int sl;
			cout << "Nhap sl phan tu can them: "; cin >> sl;
			for (int i = 1; i <= sl; i++)
			{
				//----- nhap 1 pt ------
				int x; cout << "Nhap pt thu " << n << ": "; cin >> x;
				them(p, n, n, x);
			}
			break;
		}
		case 3:
		{
			xuat_mang(p, n);
			system("pause");
			break;
		}
		case 4: {
			int vt;
			int x;
			cout << "Nhap vi tri can them:"; cin >> vt;
			cout << "Nhap gia tri can them: "; cin >> x;
			them(p, n, vt, x);
			break;
		}
		case 5: {
			int vt;
			cout << "Moi nhap vi tri can xoa: "; cin >> vt;
			xoa(p, n, vt);
			break;
		}
		case 6: {
			cout << "Them thanh cong !!" << endl;
			them_hoan_thien(p, n);
			system("pause");
			break;
		}
		case 7: {
			xoa_doi_xung(p, n);
			break;	
		}
		case 8: {
			cout << "Update.......!"<<endl;
			system("pause");
			break;
		}
		case 9: {
			check = false;
		}
		}
	}
}
void cap_phat(int*& p, int ncu, int nmoi)
{
	int* tam = p;
	p = new int[nmoi];
	for (int i = 0; i < ncu; i++)
	{
		p[i] = tam[i];
	}
	if (tam != NULL)
	{
		delete[] tam;
	}
}
void load_file(int *&p, int& n)
{
	ifstream filein;
	filein.open("input.txt", ios_base::in);
	if (filein.fail())return;
	while (true)
	{
		cap_phat(p, n, n + 1);
		filein >> p[n++];
		if (filein.eof() == true)
		{
			break;
		}
		filein.seekg(1, 1);
	}
	filein.close();
}
void xuat_file(int *p, int n)
{
	cout << "\t\t======== xuat file =======" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "PT " << i << " : " << p[i] << endl;
	}
}

void nhap_mang(int* &p, int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap pt thu " << i << " :"; cin >> p[i];
	}
}
void xuat_mang(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << " la:" << p[i] << endl;
	}
}
void them(int*& p, int& n, int vt, int x)
{
	cap_phat(p, n, n + 1);
	for (int i = n; i > vt; i--)
	{
		p[i] = p[i - 1];
	}
	p[vt] = x;
	n++;
}
void xoa(int*& p, int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		p[i] = p[i + 1];
	}
	n--;
	cap_phat(p, n, n);
}
bool check_hoan_thien(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++) {
		  if (n % i == 0)sum += i;
	}			
	if (sum == n)return true;
	return false;
}
void them_hoan_thien(int* &p, int &n) {
	for (int i = 0; i < n; i++) {
		if (check_hoan_thien(p[i]) == true) {
			them(p, n, i, 0);
			i++;
		}
	}
}
int so_dao(int n){
	int dao = 0, du;
	while (n != 0)
	{
		du = n % 10;
		dao = (dao * 10) + du;
		n = n / 10;
	}
	return dao;
}
bool check_doi_xung(int n) {
	if (n > 9) {
	  if(n == so_dao(n)) return true;
	}
	return false;	
}
void xoa_doi_xung(int* &p,int &n) {
	for (int i = 0; i < n; i++)
	{
		if (check_doi_xung(p[i])) {
			xoa(p, n, i);
			i--;
		} 
	}
}