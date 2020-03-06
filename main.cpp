#include <iostream>
#include <string>
#include <cstdlib>
#include "carro.h"

using namespace std;

int main( int argc, char** argv){
    carro c1;
    c1.marca = "fiat";
    c1.ano = 2017;
    c1.cor = "branco";

    carro c2;
    c2.marca = "ferrari";
    c2.ano = 2015;

    cout << c1.marca << endl;
    cout << c2.marca << endl;

return 0;
}