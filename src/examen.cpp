#include <iostream>
#include "../lib/mtColor.h"
using namespace std;

string mtNombre = "Marlon Michael Tipan Zhicay";
const int mtCedula = 175233471;

void mt()
{
    
}






int main()
{
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

    SetConsoleTextAttribute(hConsole, 1);
    cout << "COLOR " <<mtNombre<< mtCedula<<endl;
    return 0;
}


