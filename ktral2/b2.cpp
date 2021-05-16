#include <iostream>
#include <fstream>
#include<string>
using namespace std;

typedef struct sinh_vien {
	string account;
	string password;

} sv;
void load_file(sv s[], int& n);
void xuat(sv s[], int n);

void main()
{
	sv s[100];
	int n = 0;
	//---------------------
	load_file(s, n);
	xuat(s, n);
	system("pause");
}
void load_file(sv s[], int& n)
{
	ifstream filein;
	filein.open("sv.txt", ios_base::in);
	while (true)
	{
		sv acc;		
		getline(filein, acc.account, ',');
		getline(filein, acc.password);
		s[n++] = acc;
		if (filein.eof() == true)
		{
			break;
		}
	}
	filein.close();
}
void xuat(sv s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Sinh vien " << i << " : " << endl;
		cout << "Tai khoan: " << s[i].account << "\t\t Mat khau: " << s[i].password<<endl;
	}
}
