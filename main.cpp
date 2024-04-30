#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "\"Hellow? World!\"" << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "/Bjarne Stroustrup/\n";
	return 0;
}