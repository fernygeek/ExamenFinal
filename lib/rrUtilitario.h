#include <iostream>
#include <fstream>      
#include <iomanip>      
#include <windows.h>   
#include <unistd.h>     
#include <vector>
#include <string>
#include <string.h>

using namespace std;

#define SLEEP 10000

const string RRCEDULA = "1003781018";
const string RRNOMBRE = "Ruth Fernanda Rueda Rueda";

struct rrNombres
{
    string rrNombreApe;
    struct rrNombres *sgte;
};

struct rrCola {
    rrNombres *delante;
    rrNombres *atras  ;
};

void rrEncolar( struct rrCola &Q, string rrName )
{
     struct rrNombres *aux = new(struct rrNombres);
     aux->rrNombreApe = rrName;
     aux->sgte = NULL;
     
     if( Q.delante == NULL)
         Q.delante = aux;   // encola el primero elemento
     else
         (Q.atras)->sgte = aux;
         
     Q.atras = aux;        // puntero que siempre apunta al ultimo elemento
}

typedef rrNombres *rrPtrCola;   

enum color { azul = 1, verde, turqueza, rojo, morado, naranja, blanco};
const string  CLS = "\x1B[2J\x1B[H";


int const Q = 4,
          L = 54,
          TE = -10, //Token de error
          TN = -20; //Token de nombre y apellido

string const ALFA = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ .";

int const mt[Q][L]=
{//    a   b   c  d   e   f   g   h   i   j   k  l   m   n   o   p   q   r   s   t   u   v   w   x   y   z   A   B   C  D   E   F   G   H   I   J   K  L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z  " "   .
    {  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  TE,  TE  },     
    {  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,   TE  },       
    {  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  TE,  TE  },   
    {  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3, 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  TE,  TN  },   
}; 

int rrValores = 0;



// Función para insertar color en la terminal.
string rrSetColor(color c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return "";
}

string rrShowLoadingSpinner()
{
    char c[] ="\\|/- ";
    for (int i = 0; i <= 100; i++)
    {   cout << "\r" << c[i%5] << " " <<setw(3) <<i << " % ";
        usleep(SLEEP);
    }
    return "";
}

int rrGetIndiceALFA(char c)
{
    int index = ALFA.find(c);
    if (index >= 0)
        return index;
    return TE;
}

string rrValidarNombre(string w)
{
    struct rrCola rrQ;
    rrQ.delante = NULL;
    rrQ.atras   = NULL;
    string str ="";
    int q = 0, l = 0;
    for (auto &&c : w)
    {
        l = rrGetIndiceALFA(c);
        q = mt[q][l];
        if (q == TE)
        {
            cout << rrSetColor(rojo);
            w.pop_back();
            str= rrShowLoadingSpinner() + " Error: " + w;  
            break;
        }
        if (q == TN)
        {
            w.pop_back();
            rrEncolar(rrQ,w);
            str= rrShowLoadingSpinner() + " Encolando: " + w;
            rrValores++;
        }
    } 
    cout << str << endl;  
    return str;
}

void rrReadNombres(string pathFileName) // pathFileName -->  "../data/alumnos.txt"
{
    fstream f;
    string line;
    cout << rrSetColor(turqueza) << "readArchivo: " << pathFileName << endl << endl;
    cout << rrSetColor(morado) << "\tCOLA : Encolando" << endl << endl;
    f.open(pathFileName, ios_base::in); // in  out  app (in-->leer, out-->crea & escribe, app: leer/ agregar/ crea)
    
    if ( !f.is_open() )
        cout << "Error al abrir el archivo: " << pathFileName << endl;
    else
    {
        while (!f.eof() ) // si el archivo esta vacio me iba a generar error
        {
            getline(f, line);
            rrSetColor(azul);
            rrValidarNombre(line);
        }
    }
    f.close();
}

void rrMostrarDatos(){
    cout << rrSetColor(turqueza); 
    cout<< setw(10) << "_____________________________________________________"    
        << endl << endl
        << setw(10) << "   Developer-Nombre : "  << RRNOMBRE  << endl
        << setw(10) << "   Developer-Cedula : "  << RRCEDULA  << endl
        << setw(10) << "   Valores Validos  : "  << rrValores  << endl
        << setw(10) << "_____________________________________________________"    
        << endl << endl;
}
