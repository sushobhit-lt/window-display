//Compile using command
//g++ -o fetchDisplay.exe display.cpp

#include "Windows.h"
#include <Windows.h>
#include <iostream>
//#include <set>

using namespace std;

int main()
{
	//set<string> res; 
	//set<string> :: iterator itr;
	
    DEVMODE dm = { 0 };
    dm.dmSize = sizeof(dm);
    for( int iModeNum = 0; EnumDisplaySettings( NULL, iModeNum, &dm ) != 0; iModeNum++      ) 
    {
       if(iModeNum > 0){
	    cout << ",";
	   }
	   cout << dm.dmPelsWidth << "x" << dm.dmPelsHeight;
	   //res.insert(dm.dmPelsWidth+"x"+dm.dmPelsHeight);
	   //res.insert(dm.dmPelsWidth+"");
	}
	cout << endl;
	//cout << res.size();
	//for (auto elem : res){
	//	cout << elem << " ," ;
	//}	
	//cout << endl;
	//cout << "Finished";
	//for (itr=res.begin(); itr!=res.end();++itr){
	//	cout << *itr << endl;
	//}
 return 0;
}