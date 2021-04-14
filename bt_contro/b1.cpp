#include <iostream>
#include <stdlib.h>
using namespace std;
void nhap(int* p, int n);
void xuat(int* p, int n);
void min_max(int* p, int n);
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
	min_max(p,n);
}
void nhap(int *p, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i <<": "; cin >> *(p + i);
	}
}
void xuat(int *p, int n){
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << ": " << *(p + i) << endl;
	}
}
void min_max(int* p, int n) {
	int min = *p;
	int max = *p;
	for (int i = 0; i < n; i++)
	{
		if (max < *(p+i))
		{
			max = *(p + i);
		}
		if (min > *(p+i))
		{
			min = *(p + i);
		}
	}
	cout << "Max la :" << max << endl;
	cout << "Min la :" << min << endl;
}
