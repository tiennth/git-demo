/* de bai : ham nhap vao mang 1 chieu so nguyen co kich thuoc n
ham xuat ra mang 1 chieu so nguyen co kich thuoc n
ham kiem tr X  co phai so hoan hao k.
ham xuat tong cac so han hao
*/

#include <iostream>
using namespace std;
//tiền hàm
void input(int *pM, int &nSPT);
void output(int *pM, int nSPT);
bool CheckSHH(int nN);
int TongSHH(int *pM, int nSPT);


void main()
{
	int nSPT;
	int *pA = new int [1000];
	input(pA, nSPT);
	output(pA, nSPT);
	cout<<"Tong cac so hoan hao trong mang la: "<<TongSHH(pA, nSPT)<<endl;
	delete pA;
	system("pause");
}

//hàm nhập
void input(int *pM, int &nSPT)
{
	cout<<"Nhap so luong phan tu: ";
	cin >>nSPT;
	for(int i = 0; i < nSPT; i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" : ";
		cin >>*(pM + i);
	}

}

//hàm xuất
void output(int *pM, int nSPT)
{
	cout<<"cac phan tu vua nhap la: ";
	for(int i = 0; i < nSPT; i++)
	{
			cout<<*(pM + i)<<"\t";
	}
}

//kiểm tra số hoàn hảo
bool CheckSHH(int nN)
{
	int nTong = 0;
	for(int i = 1; i < nN; i++)
	{
		if(nN % i == 0)
		{
			nTong += i;
		}
	}
	if(nTong == nN)
		return true;
	return false;
}

//hàm xuất tổng các số hoàn hảo
int TongSHH(int *pM, int nSPT)
{
	int nTong = 0;
	for(int i = 0; i < nSPT; i++)
	{
		if(CheckSHH(*(pM + i)) == true)
		{
			nTong += *(pM + i);
		}
	}
	return nTong;
}