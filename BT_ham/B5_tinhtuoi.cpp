#include <iostream>
using namespace std;

int tuoi(int n) {
	return 2021 - n;
}
int main() {
	int t;
	do
	{
		cout << "Nhap tuoi :"; cin >> t;
	if (t <= 0) {
		cout << "Khong hop le !"<<endl;
	}
	} while (t<=0);
	cout << "Nam sinh cua ban la :" << tuoi(t) << endl;
}
