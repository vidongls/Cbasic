#include <iostream>
using namespace std;

void hoan_vi(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
void main(){	
	int a, b;
	cout << "Nhap a:"; cin >> a;
	cout << "Nhap b:"; cin >> b;
	hoan_vi(a, b);
	cout << "Sau khi hoan vi :"<<endl;
	cout <<"a la :"<< a<<endl;
	cout <<"b la :"<< b;	
}