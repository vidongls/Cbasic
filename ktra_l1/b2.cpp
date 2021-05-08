#include <iostream>
using namespace std;

void nhap(int* p, int n);
void xuat(int* p, int n);
void xanhat(int* p, int n, int x);

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
	int x; cout << "nhap x: "; cin >> x;
	xanhat(p, n,x);
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

void xanhat(int *p, int n, int x)
{
	int kc_max = INT32_MIN;
	int gtri_xa = -1;
	for (int i = 0; i < n; i++)
	{
		int kc = abs(p[i] - x);
		if (kc > kc_max)
		{
			kc_max = kc;
			gtri_xa = i;
		}
	}
	cout << "Gia tri xa " << x << " nhat la: " << p[gtri_xa] << endl;
}