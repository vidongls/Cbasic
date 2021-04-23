#include <iostream>
using namespace std;
int main()
{
	char c[100] = "";
	int dem = 0;
	cout << "Moi ban nhap chuoi :"; gets_s(c);
	while (c[dem] != '\0')
	{
		dem++;
	}
	cout << "Do dai cua chuoi "<<c<<" la :"<<dem;
}
