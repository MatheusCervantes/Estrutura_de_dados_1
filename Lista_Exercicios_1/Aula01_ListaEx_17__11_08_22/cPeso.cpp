/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPeso.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 23:42
 */

#include "cPeso.h"
#include <iostream>

using namespace std;

cPeso::cPeso() {
}

cPeso::cPeso(const cPeso& orig) {
}

cPeso::~cPeso() {
}
void cPeso::insert(){
    int op;
    double h;
    cout << "Este programa faz o cáculo do peso ideal." << endl;
    cout << "Digite sua altura: ";
    cin >> h;
    cout << "Qual seu sexo ? Digite 1 para masculino e 2 para feminino: ";
    cin >> op;
    if (op == 1 || op == 2)
        cout << endl << "O seu peso ideal é: " << this->peso(h,op);
    else
        cout << "Opção inválida.";
}
double cPeso::peso(double h, int op){
    double peso;
    if (op ==1) 
        peso = (72.7*h)-58;   
    else
        peso = (62.1*h)-44.7;
    return peso;
}
