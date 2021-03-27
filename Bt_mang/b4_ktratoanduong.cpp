#include<iostream>
#define MAX 100
using namespace std;
void mang_toan_duong(int a[], int n);
void nhap(int a[], int n);
int main() {

	
	int a[MAX];

	int n;
	do
	{
		cout << "Nhap sl pt cua mang: "; cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	mang_toan_duong(a, n);
}
void nhap(int a[], int n)
{
	cout << "\t\t=========== nhap =========" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " :"; cin >> a[i];
	}
}
void mang_toan_duong(int a[], int n)
{
	bool kt = true;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			kt = false;
			break;
		}
	}
	if (kt == true)
	{
		cout << "Mang toan duong" << endl;
	}
	else
	{
		cout << "Mang khong toan duong" << endl;
	}
}
