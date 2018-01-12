/*
de bai : nap so nguyen duong va nho hon 1000, neu hap sai nhap lai. kiem tra so do co phair so chinh phuong k
*/
#include <iostream>
using namespace std;

void main ()
{
	int nNum = 0;

	do{
		cout << "nhap vao so nguyen duong va nho hon 1000:";
		cin >> nNum;
	}while (nNum < 0 || nNum >1000);
	if ((sqrt((double)nNum))==((int)(sqrt((double)nNum))))
	{
		cout << "nNum la so chinh phuong"<<endl;
	}
	else 
	{
		cout << "nNum khong la so chinh phuong"<<endl;
	}
	system ("pause");

}