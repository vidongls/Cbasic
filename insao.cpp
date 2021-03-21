#include<iostream>
using namespace std;
int main(){
	
	int n;
	do
	{
		cout << "Nhap n:"; cin >> n;
	} while (n<=0);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n - i; j++)
		cout << " ";
		for (int m = 0; m <= 2 * i; m++)
		cout << "*";
		cout << endl;
	}
	
}
}


