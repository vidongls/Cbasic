#include<iostream>
#define MAX 100
using namespace std;

void nhap(int a[], int n);
void le_cuoi(int a[], int n);
int main() {

	
	int a[MAX];

	int n;
	do
	{
		cout << "Nhap sl pt cua mang: "; cin >> n;
	} while (n <= 0 || n > MAX);
	nhap(a, n);
	cout << "Gia tri le cuoi cung la :";
	le_cuoi(a, n);
}
void nhap(int a[], int n)
{
	cout << "\t\t=========== nhap =========" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " :"; cin >> a[i];
	}
}
void le_cuoi(int a[], int n)
{
	for (int i = n; i > 0; i--)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "  ";
			break;
		}
	}
	cout << endl;
}