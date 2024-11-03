// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a,b,c;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b ;
	cout << "Enter number 3: ";
	cin >> c;
	cout << "Result: " << a << b << c << endl;
	cout << "Цифри заданого числа утворять спадаючу \t";
	cout << boolalpha << ( c > b && b > a ) << endl;
	cout << "Цифри заданого числа утворять зроставючу \t";
	cout << boolalpha << ( a < b && b < c ) << endl;

return 0;
}