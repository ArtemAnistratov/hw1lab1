#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Stone for sale\n";
	cout << "found on Mount Hoverla\n";
	cout << "Weight     |  ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "200g";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "  |\n";

	cout << "State      |  ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "good";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "  |\n";

	cout << "scent      |  ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "nice";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "  |\n";
	cout << "call: 000 000\n";
	return 0;
}