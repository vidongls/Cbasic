#include <iostream>
using namespace std;

int UCLN(int a, int b) {
	if (a == b) {
		return a;
	}
	else if(a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
}
void main()
{
	int a, b;
	cout << "Nhap vao a:"; cin >> a;
	cout << "Nhap vao b:"; cin >> b;
	cout << "UCLN cua " << a << " va " << b << " la :" << UCLN(a, b)<<endl;
	cout << "BCNN cua " << a << " va " << b << " la :" << (a*b)/UCLN(a, b);
}
