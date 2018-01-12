/*
De bai : nhap vao so nguyen duong chua gia tri thang duong lich neu nhap sai thi nhap lai
chuong trinh xuat ra mua tuong ung
thang 1, 2, 3: mua xuan
...
thang 10, 11, 12: mua dong

*/
#include <iostream>
using namespace std;

void main()
{
	int nThang = 0;
	
	do{
		cout << "nhap thang: ";
		cin >> nThang;
	}while (nThang < 1 || nThang > 12);

	switch(nThang)
	{
	case 1 : case 2 : case 3 :
		cout << "Mua xuan"<<endl;
		break;
	case 4 : case 5 : case 6 :
		cout << "Mua ha"<<endl;
		break;
	case 7 : case 8 : case 9 :
		cout << "Mua thu"<<endl;
		break;
	default :
		cout << "Mua dong"<<endl;
		break;
	}
	system ("pause");
}