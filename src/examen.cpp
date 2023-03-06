#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "../lib/mtColor.h"
using namespace std;

const string mtNombre = "Marlon Michael Tipan Zhicay";
const int mtCedula = 175233471;

// Definición de Coordenadas
struct mtCoordenada
{
    int mtcapacidad_belica;
    char mtgeolocalizacion[20];
    char mtdetalle_arsenal[40];
    struct mtarsenal *izquierda;
    struct mtarsenal *derecha;
};


//Procedimiento para leer el archivo 
//void mtlectura(){

//}

void mtpresentarAr(){
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 1);
    cout<<"[+]Informacion Arbol Binario de capacidad Belica Ucraniana"<<endl
        <<"Developer-Nombre : "<<mtNombre<<endl
        <<"Developer-Cedula : "<<mtCedula<<endl
        <<"Capacidad Belica : "<<endl
        <<"Coordeanada-Total : "<<endl
        <<"Coordeanda-SecCarga : "<<endl;
}

int main()
{
    mtpresentarAr();
    ifstream mtarchivocoor("coordenadas.txt");

    return 0;
}


