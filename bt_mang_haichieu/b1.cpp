#include <iostream>
#define MAX 50
using namespace std;
void nhap(int a[MAX][MAX], int cot, int dong);
void xuat(int a[MAX][MAX], int cot, int dong);
int tong(int a[MAX][MAX], int cot, int dong);
int main()
{
	int a[MAX][MAX];
	int cot = 0;
	int dong = 0;
	do
	{
		cout << "Moi nhap so dong :"; cin >> dong;
	} while (dong <= 0);
	do
	{
		cout << "Moi nhap so cot :"; cin >> cot;
	} while (cot <= 0);
	nhap(a, cot, dong);
	xuat(a, cot, dong);
	cout <<"\nTong duong cheo chinh va phu :"<< tong(a, cot, dong)<<endl;
	system("pause");
}
void nhap(int a[MAX][MAX], int cot, int dong) {
    cout << "\t\t=========== Nhap ============"<<endl;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "Nhap phan tu a[" << i << "][" << j << "] :"; cin >> a[i][j];
		}
	}
}
void xuat(int a[MAX][MAX], int cot, int dong) {
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << a[i][j]<<"   ";
		}
		cout << endl;
	}
}
int tong(int a[MAX][MAX], int cot, int dong) {
	int dem = 0;
	int tong = 0;
	//tong duong cheo chinh
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (i == j)
			{
				if (a[i][j] % 2 != 0) {
					tong += a[i][j];
				}
			}
			//tong duong cheo phu
			if (i+j+1 == dong)
			{
				if (a[i][j] % 2 !=0)
				{
				  tong += a[i][j];
				}

			}
		}
	}
	return tong;
}