// CNTT.number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int somax(int a, int b) {
	return a > b ? a : b;
}
int main()
{
	int so1, so2, so3, lonnhat, nhonhat;
	cout << "Nhap so 1: "; cin >> so1;
	cout << "Nhap so 2: "; cin >> so2;
	cout << "Nhap so 3: "; cin >> so3;

	lonnhat = somax(so1, so2);
	nhonhat = somin(so1, so2);

	lonnhat = somax(lonnhat, so3);
	nhonhat = somin(nhonhat, so3);

	cout << "so nho nhat la: " << nhonhat << endl;
	cout << "so lon nhat la: " << lonnhat << endl;

	return 0;
}


