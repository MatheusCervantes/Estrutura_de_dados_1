/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cDelta.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:29
 */

#include "cDelta.h"
#include <iostream>

using namespace std;

cDelta::cDelta() {
}

cDelta::cDelta(const cDelta& orig) {
}

cDelta::~cDelta() {
}

void cDelta::insert(){
    double a, b, c;
    cout << "Este programa faz o cálculo do delta." << endl << endl;
    cout << "Insira o valor de a: ";
    cin >> a;
    cout << "Insira o valor de b: ";
    cin >> b;
    cout << "Insira o valor de c: ";
    cin >> c;
    cout << endl << "O valor de delta é: " << this->delta(a,b,c);
}

double cDelta::delta(double a, double b, double c){
    return b*b-4*a*c;
}
