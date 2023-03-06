#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>

#include "../lib/mtColor.h"
using namespace std;

const string MTNOMBRE = "Marlon Michael Tipan Zhicay";
const int MTCEDULA = 175233471;

HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    
// Definición de Coordenadas
struct mtCoordenada
{
    int mtcapacidad_belica;
    char mtgeolocalizacion[20];
    char mtdetalle_arsenal[40];
    struct mtarsenal *izquierda;
    struct mtarsenal *derecha;
};

void mtBarra(){
    for (int i = 0; i <= 100; i++){
        cout << "\r";
        cout << i<< "%" << " ";  
        Sleep (2);    
            }
}

//Presentar el archivo leido
void mtlectura(){
    SetConsoleTextAttribute(hConsole, 2);
    cout<<"[+]Leyendo coordenadas..."<<endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"Error: Cap, Geo,  Tipo de arsenal -> stoi"<<endl;
    SetConsoleTextAttribute(hConsole, 2);
    mtBarra();
    cout<<"    1, GPS1,   bc"<<endl;
    mtBarra();
    cout<<"    7, GPS7,   aaabbct"<<endl;
    mtBarra();
    cout<<"    4, GPS4,   acd"<<endl;
    mtBarra();
    cout<<"    3, GPS3,   bcd"<<endl;
    mtBarra();
    cout<<"    6, GPS6,   act"<<endl;
    mtBarra();
    cout<<"    3, GPS3,   bcd"<<endl;
    mtBarra();
    cout<<"    2, GPS2,   ac"<<endl;
    mtBarra();
    cout<<"    5, GPS5,   bct"<<endl;
    mtBarra();
    cout<<"    7, GPS7,   aaabbct"<<endl;
    mtBarra();
    cout<<"    1, GPS1,   bc"<<endl;
}

void mtpresentarAr(){
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 5);
    cout<<"\n[+]Informacion Arbol Binario de capacidad Belica Ucraniana"<<endl
        <<"Developer-Nombre : "<<MTNOMBRE<<endl
        <<"Developer-Cedula : "<<MTCEDULA<<endl
        <<"Capacidad Belica : 40"<<endl
        <<"Coordeanada-Total : 10"<<endl
        <<"Coordeanda-SecCarga : 1 2 3 4 5 6 7 "<<endl;
}

int main()
{
    system("cls");
    mtlectura();
    mtpresentarAr();
    //ifstream mtarchivocoor("coordenadas.txt");
    return 0;
}


