#include <iostream>

using namespace std;

void hoc_luc(float n) {

		cout << "Hoc luc la : ";
		if (n >= 9 && n <= 10) {
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
void main() {
	float n;
	do
	{
		cout << "Nhap diem: "; cin >> n;
		if (n < 0) {
		cout << "Diem khong hop le !"<<endl;
		}
	} while (n<0);
	hoc_luc(n);
}
