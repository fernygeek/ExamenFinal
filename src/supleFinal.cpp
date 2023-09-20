#include <iostream>
#include <unistd.h>
#include <fstream>
#include <vector>
#include "../lib/rrUtilitario.h"
using namespace std;

const string RRCORREO = "ruth.rueda@epn.edu.ec";
const string RRNOMBRES = "../../data/nombres.txt";

int main()
{   
    system("cls");
    rrReadNombres(RRNOMBRES);
    rrMostrarDatos();
    return 0;
}



