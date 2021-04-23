#include <iostream>
#define MAX 100
using namespace std;
void sao_chep(char a[], char b[]);
int main()
{
	char a[MAX] = "";
	char b[MAX] = "";
	cout << "Moi nhap vao chuoi :"; gets_s(a);
	sao_chep(a, b);
	cout << "Chuoi da duoc sao chep :"<<b<<endl;
	system("pause");
}
void sao_chep(char a[], char b[]) {
	int i = 0;
	do
	{
		b[i] = a[i];
		i++;
	} while (a[i]!='\0');
}