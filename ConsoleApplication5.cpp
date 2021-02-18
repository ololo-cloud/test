// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void CalcLarge(char *num, int bytes)
{
	cout << "Bid-Endian:";
	for (int i = bytes - 1; i >= 0; i--)
	{
		for (int k = 0; k < 8; k++)
		{
			cout << ((*(num + i) >> (7 - k)) & 1);
		}
	}
	cout << endl;
}
void CalcMin(char *num, int bytes)
{
	cout << "Little-Endian:";
	for (int i = 0; i < bytes; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			cout << ((*(num + i) >> (7 - k)) & 1);
		}
	}
	cout << endl;
}
int main()
{
    cout << "Input your number: ";
	double num;
	cin >> num;
	int numInt = (int)num;
	int numInt2 = (int)num;
	float numFloat = (float)num;
	float numFloat2 = (float)num;
	cout << "int:" << endl;
	CalcLarge((char*)&numInt,4);
	CalcMin((char*)&numInt2, 4);
	cout << "float:" << endl;
	CalcLarge((char*)&numFloat, 4);
	CalcMin((char*)&numFloat2, 4);
	cout << "double:" << endl;
	CalcLarge((char*)&num, 8);
	CalcMin((char*)&num, 8);


}

