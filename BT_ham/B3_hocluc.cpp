#include <iostream>

using namespace std;

void hoc_luc() {
int n;
	cout << "Nhap diem: "; cin >> n;
	if (n < 0) {
		cout << "Diem khong hop le !";
	}
	else {
		cout << "Hoc luc la : ";
	if (n >=  9 && n <= 10) {
		cout << "Gioi!";
	}
	else if (n >= 7 && n <= 8) {
		cout << "Kha!";
	}
	else if (n >= 4 && n <= 6) {
		cout << "Trung Binh!";
	}
	else if (n >= 0) {
		cout << "Yeu!";
	}
	}
}
void main(){	
	hoc_luc();
}