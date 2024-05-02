#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "To be,";
	SetConsoleTextAttribute(hConsole, 0x0C);
	cout << " or not ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "to be: that is the question:\n";
	cout << "Whether ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "'tis nobler in the mind to suffer\nThe slings and arrows of outrageous fortune,\nOr to take arms against a sea of troubles,\nAnd by opposing end them ?\nWilliam Shakespeare\n";
	SetConsoleTextAttribute(hConsole, 0x0F);
	return 0;
}