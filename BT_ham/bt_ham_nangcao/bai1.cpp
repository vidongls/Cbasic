#include<iostream>
using namespace std;

int reverse(int n) {
	int du = n % 10;
	n /= 10;
	int cuoi;
	while (n>0)
	{
		cuoi = n % 10;
		n /= 10;
		du = du * 10 + cuoi;
	}
	return du;
}
int main() {
	int n;
	cout << "Nhap n:"; cin >> n;
	cout << "Sau khi dao la :" << reverse(n) << endl;
}