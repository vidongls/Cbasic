#include<iostream>
using namespace std;

void socp(int n) {
	int cp = sqrt(n);
	(cp * cp == n)? cout << "La so chinh phuong!": cout << "Khong phai so chinh phuong!";
}
int main() {
	int n;
	do
	{
		cout << "Moi nhap n: "; cin >> n;
		if (n < 0) {
			cout << "Khong hop le !"<<endl;
		}
	} while (n<0);
	socp(n);
}

