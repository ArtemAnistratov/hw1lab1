#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0C);
	cout << "Every\n";
	SetConsoleTextAttribute(hConsole, 0x0C);
	cout << "hunter\n";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "wants\n";
	SetConsoleTextAttribute(hConsole, 0x0A);
	cout << "to know\n";
	SetConsoleTextAttribute(hConsole, 0x09);
	cout << "where\n";
	SetConsoleTextAttribute(hConsole, 0x01);
	cout << "the pheasant\n";
	SetConsoleTextAttribute(hConsole, 0x0D);
	cout << "is.\n";
	SetConsoleTextAttribute(hConsole, 0x0F);
	return 0;
}