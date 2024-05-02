#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Hellow World!" << endl;
	cout << "\\\\Dennis Ritchi\\\\" << endl;
	return 0;
}