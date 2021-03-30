#include<iostream>
#define MAX 100
using namespace std;
void nhap(int a[], int n) ;
void xuat(int a[], int n);
void xoa(int a[], int &n, int vt);
void xoa_trung(int a[], int &n);
int main() {

	
	int a[MAX];

	int n;
	do
	{
		cout << "Nhap sl pt cua mang: "; cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	cout << "==========Xuat===========" << endl;
	xuat(a, n);
	xoa_trung(a,n);
	cout << "==========Sau khi xoa !=========="<<endl;
	xuat(a, n);
}
void nhap(int a[], int n)
{
	cout << "\t\t=========== Moi nhap =========" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i+1 << " :"; cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i+1 << " :"<<a[i]<<endl;
	}
}
void xoa(int a[], int &n, int vt) {
	for (int i = vt; i < n-1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoa_trung(int a[], int &n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i]==a[j])
			{
				xoa(a, n, j);
				j--;
			}
		}
	}

}
