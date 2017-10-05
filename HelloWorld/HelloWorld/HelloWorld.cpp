#include <iostream>
using namespace std;

void sayHello()
{
	cout << "Hello" << endl;
	cout << "My name is Phuong" << endl;
}

int main() 
{
	char c;
	short e;
	int a = 7;
	long l = 0;

	double d = 8.8;
	float f;
	

	cout << "Hello 1" << endl;
	cout << d << endl;
	sayHello();

	cout << "Size of char is " << sizeof(char) << endl;
	cout << "Size of short is " << sizeof(short) << endl;
	cout << "Size of int is " << sizeof(int) << endl;
	cout << "Size of long is " << sizeof(long) << endl;
	cout << "Size of long long is " << sizeof(long long) << endl;

	cout << "Size of float is " << sizeof(float) << endl;
	cout << "Size of double is " << sizeof(double) << endl;
	

	system("pause");
}
