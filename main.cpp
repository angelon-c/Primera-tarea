#include <iostream>
#include "transporte.h"

int main() {


    transporte *generico;
    terrestre *automovil;
    marino *barco;
    aereo *avion;
    generico=new transporte();
    automovil= new terrestre();
    barco = new marino();
    avion = new aereo();
    generico->desplazamiento();
    automovil->desplazamiento();
    barco->desplazamiento();
    avion->desplazamiento();
    delete generico;
    delete barco;
    delete avion;
    delete automovil;
    return 0;
}
