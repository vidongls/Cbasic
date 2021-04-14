#include <iostream>
#include <stdlib.h>
using namespace std;
void nhap(int* p, int n);
void xuat(int* p, int n);
void sap_xep(int* p, int n);
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
	sap_xep(p, n);
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
void sap_xep(int* p, int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (*(p+i) > *(p+j))
			{
				swap(*(p + i), *(p + j));
			}
		}		
	}
}
