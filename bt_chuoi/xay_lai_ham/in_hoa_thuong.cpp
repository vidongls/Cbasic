#include <iostream>
#define MAX 100
using namespace std;
void in_thuong(char a[]);
void in_hoa(char a[]);
int main()
{
	char a[MAX] = "";
	cout << "Moi nhap vao chuoi :"; gets_s(a);
	in_thuong(a);
	cout << "Sau khi in thuong :"<<a<<endl;
	in_hoa(a);
	cout << "Sau khi in hoa :" << a << endl;
	system("pause");
}
void in_thuong(char a[]) {
	int i = 0;
	do
	{
		if (a[i] >= 65 && a[i] <= 92)
		{
			a[i] += 32;
		}
		i++;
	} while (a[i]!='\0');
}
void in_hoa(char a[]) {
	int i = 0;
	do
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		i++;
	} while (a[i] != '\0');
}