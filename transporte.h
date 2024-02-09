//
// Created by angel on 2/7/24.
//
#include <string>
#include <iostream>
#ifndef POO_TRANSPORTE_H
#define POO_TRANSPORTE_H

using namespace std;

class transporte {
    int velocidad;
    std::string nombre;
    int peso;
    string color;
public:
    virtual void desplazamiento(){
        cout<<"comenzó a moverse transporte"<<endl;
    }
    virtual void frenar()
    {
        cout<<"dejó de moverse"<<endl;
    }
};

class terrestre: public transporte {
public:

    int ruedas;

    void desplazamiento() override{
        cout<<"comenzó a moverse a 20km/h"<<endl;
    }
};
class marino: public transporte{
public:
    int helices;
    void desplazamiento() override{
        cout<<"Comenzó a desplazarse 40 nudos/h"<<endl;

    }

};
class aereo: public transporte{
public:
    int turbinas;
    void desplazamiento() override{
        cout<<"Comenzó a desplazarse a 40 millas maritimas"<<endl;
    }
};


#endif //POO_TRANSPORTE_H
