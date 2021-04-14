#include <iostream>
#include <stdlib.h>
using namespace std;
void nhap(int* p, int n);
void xuat(int* p, int n);
bool ktra_ngto(int n);
void so_ngto(int* p, int n);
int main()
{
	int n;
	do
	{
		cout << "Moi nhap n :";	  cin >> n;
		if (n<0)
		{
			cout << "Khong hop le !";
		}
	} while (n<0);
	/*int* p = (int*)malloc(sizeof(int));*/
	int* p = (int*)malloc(sizeof(int));
	nhap(p,n);
	xuat(p,n);
	so_ngto(p, n);
}
void nhap(int *p, int n) {
	cout << "============== Nhap ==============\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i <<": "; cin >> *(p + i);
	}
}
void xuat(int *p, int n){
	cout << "============== Xuat ==============\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << ": " << *(p + i) << endl;
	}
}
bool ktra_ngto(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
void so_ngto(int* p, int n) {
	cout << "============= So nguyen to la ============\n";
	for (int i = 0; i < n; i++)
	{
		if (ktra_ngto(*(p+i)))
		{
			cout << "\t" << *(p + i);
		}
	}
}