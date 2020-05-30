//Compile using command
//g++ -o fetchDisplay.exe display.cpp

#include "Windows.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	DEVMODE dm = { 0 };
	dm.dmSize = sizeof(dm);
	for (int iModeNum = 0; EnumDisplaySettings(NULL, iModeNum, & dm) != 0; iModeNum++)
	{
		if (iModeNum > 0) {
			cout << ",";
		}
		cout << dm.dmPelsWidth << "x" << dm.dmPelsHeight;
	}
	cout << endl;
	return 0;
}
