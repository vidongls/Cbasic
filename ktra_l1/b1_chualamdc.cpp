#include <iostream>
using namespace std;

void nhap(int* p, int n);
void xuat(int* p, int n);
//-----------------------
void sap_xep_giam(int* p, int n);

int main()
{
	int n;
	do
	{
		cout << "Moi nhap n :";	  cin >> n;
		if (n <= 0)
		{
			cout << "Khong hop le !\n";
		}

	} while (n <= 0);
	int* p = new int[n];
	nhap(p, n);
	xuat(p, n);
	
	cout << "Mang sau khi duoc sap xep la: "<<endl;
	sap_xep_giam(p, n);
	xuat(p, n);

}
void nhap(int* p, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << ": "; cin >> p[i];
	}
}
void xuat(int* p, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << ": " << p[i] << endl;
	}
}
void them(int *p, int& n, int vt, int x)
{
	for (int i = n; i > vt; i--)
	{
		p[i] = p[i - 1];
	}
	p[vt] = x;
	n++;
}
void sap_xep_giam(int* p, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i] > p[j])
			{
				swap(p[i], p[j]);
			}
		}
	}
}
