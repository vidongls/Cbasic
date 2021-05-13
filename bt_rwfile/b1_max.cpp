#include <iostream>
#include <fstream>
using namespace std;
//----------
void doc_file(int a[], int& n);
void xuat(int a[], int n);
int max(int a[], int n);
//void ghi_file(int a[], int n);
int main()
{
	int a[100], n = 0;
	doc_file(a, n);
	n = a[0];
	cout << n;
	xuat(a, n);
	cout << "Max la :" << max(a,n)<<endl;
	//ghi_file(a, n);
	system("pause");
}

void doc_file(int a[], int& n)
{
	//==== doc file ====
	//B1: Tạo biến hỗ trợ xử lý file
	ifstream filein;
	//B2 : Dùng link để mở file
	filein.open("input.txt", ios_base::in);
	//B2.1: KT xem có mở được file không
	if (filein.fail() == true)
	{
		cout << "Khong mo duoc file!" << endl;
		system("pause");
		return;
	}
	//B3 : Đọc file
	while (filein.eof() == false)
	{
		filein >> a[n++];
	}
	//B4 : Đóng file
	filein.close();

}
void xuat(int a[], int n)
{
	cout << "\t\t====== xuat ======" << endl;
	for (int i = 1; i < n + 1; i++)
	{
		cout << "PT thu " << i << " la: " << a[i] << endl;
	}
}
int max(int a[], int n) {
	int max = a[1];
	for (int i = 1; i < n + 1; i++)
	{
		if (max < a[i])max = a[i];
	}
	return max;
}
//void ghi_file(int a[], int n) {
//	fstream f;
//	f.open("output.txt", ios::out);
//	f << max(a, n);
//}