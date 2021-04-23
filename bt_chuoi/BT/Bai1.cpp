//Bài 1. Nhập vào 1 chuỗi bất kì.Thống kê tần suất xuất hiện của từng kí tự trong chuỗi

#include <iostream>
#define MAX 100
using namespace std;
void dem_ki_tu(char a[]);
int main()
{
	char a[MAX] = "";
	cout << "Moi nhap vao chuoi :"; gets_s(a);
	dem_ki_tu(a);
	system("pause");
}
void dem_ki_tu(char a[]) {
	int dem = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		dem = 0;
		for (int j = 0; j < strlen(a); j++)
		{
			if (a[i] == a[j])
			{
				if (i <= j)
				{
					dem++;
				}
				else
				{
					break;
				}				
			}
		}
		if (dem != 0)
		{
			cout << "Ki tu :"<<a[i] << " xuat hien: " << dem<<" lan!"<<endl;
		}
	}

}