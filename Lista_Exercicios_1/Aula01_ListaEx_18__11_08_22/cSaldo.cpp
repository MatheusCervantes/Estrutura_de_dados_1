/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cSaldo.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 23:58
 */

#include "cSaldo.h"
#include <iostream>

using namespace std;

cSaldo::cSaldo() {
}

cSaldo::cSaldo(const cSaldo& orig) {
}

cSaldo::~cSaldo() {
}
void cSaldo::insert(){
    double sm, t;
    cout << "Este programa calculará o valor do seu crédito especial." << endl;
    cout << "Insira seu saldo médio do ano passado: ";
    cin >> sm;
    t = this->credito(sm);
    cout << endl << "O valor do saldo médio é de: " << sm <<endl << "O valor do crédito especial é: " << this->credito(sm);
}
double cSaldo::credito(double s){
    double t;
    if (s >= 0 && s <= 200)
        t = 0;
    else if (s >= 201 && s <= 400)
        t = s*0.2;
    else if (s >= 401 && s <= 600)
        t = s*0.3;
    else if (s >= 601)
        t = s*0.4;
    return t;
}