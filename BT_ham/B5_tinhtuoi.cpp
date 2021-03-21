#include <iostream>
using namespace std;

int tuoi(int n){
	n = 2021 - n;
	return n;
}
void main(){
	int t;
	cout << "Nhap tuoi :"; cin >> t;
	if (t <= 0) {
		cout << "Khong hop le !";
	}
	else {
		cout << "Nam sinh cua ban la :"<<tuoi(t)<<endl;
	}
}