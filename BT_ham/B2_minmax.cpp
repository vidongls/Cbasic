#include <iostream>
using namespace std;

void max_min(int n) {
	int a;
	int max;
	int min;
	for (int i = 1; i <= n; i++){
		cout << "Nhap vao phan tu thu : " << i << " = "; cin >> a;
		if (i == 1)
		{
			max = a;
			min = a;
		}
		if (max < a) {
			max = a;
		}
		if (min > a) {
			min = a;
		}
	}
	cout << "Max la :" << max << endl;
	cout << "Min la :" << min;
}

int main() {
	int n;
	do
	{
		cout << "Nhap n:" << endl; cin >> n;
		if (n < 1)
		{
			cout << "Moi nhap lai !" << endl;
		}
	} while (n<1);
	max_min(n);
}
