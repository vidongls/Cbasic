#include <iostream>
#include <math.h>
using namespace std;

int max(int n) {
	int max = 0;
	while (n > 0)
	{
		int du =n % 10;		
		if (max < du) {
			max = du;
		}
		n /= 10;
	}
	return max;
}
int min(int n) {
	int min = n % 10;
	while (n > 0)
	{
		int du = n % 10;
		if (min > du) {
			min = du;
		}
		n /= 10;
	}
	return min;
}

void main(){
	int n;
	cout << "Nhap n:" << endl; cin >> n;
	cout << "Max la:" << max(n) << endl;
	cout << "Min la:" << min(n);
}