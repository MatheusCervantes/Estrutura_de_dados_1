/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 20:53
 */

#include "cMedia.h"
#include <iostream>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::insert() {
    double n1, n2, n3;
    cout << "Este programa faz o cálculo da média de 3 notas." << endl;
    cout << "Insira o valor da nota 1: ";
    cin >> n1;
    cout << "Insira o valor da nota 2: ";
    cin >> n2;
    cout << "Insira o valor da nota 3: ";
    cin >> n3;
    cout << endl;
    if (this->calculo(n1, n2, n3)>=6){
        cout << "Sua média foi: " << this->calculo(n1, n2, n3) << endl;
        cout << "Você foi aprovado.";
    }
    else {
        cout << "Sua média foi: " << this->calculo(n1, n2, n3) << endl;
        cout << "Você foi reprovado.";
    }
}

double cMedia::calculo(double n1, double n2, double n3) {
    return (n1+n2+n3)/3;
}
