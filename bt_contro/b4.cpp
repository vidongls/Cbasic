#include <iostream>
#include <stdlib.h>
using namespace std;
void nhap(int* p, int n);
void xuat(int* p, int n);
void them(int* p, int& n, int x, int vt);
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
	them(p, n, 9, 2);
	xuat(p, n);
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
void them(int* p, int &n, int x, int vt) {
	for (int i = n; i > vt; i--)
	{
		*(p + i) = *(p + i - 1);
	}
	*(p + vt) = x;
	n++;
}
