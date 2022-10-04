/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPar.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 22:42
 */

#include "cPar.h"
#include <iostream>

using namespace std;

cPar::cPar() {
}

cPar::cPar(const cPar& orig) {
}

cPar::~cPar() {
}

void cPar::insert(){
    int n;
    cout << "Esse programa mostra se o número é par ou impar e se é negativo ou positivo." << endl;
    cout << "Insira o número: ";
    cin >> n;
    if (n%2==0) 
        cout << "O número " << n << " é par." << endl;
    else
        cout << "O número " << n << " é ímpar." << endl;
    if (n>=0)
        cout << "O número " << n << " é positivo.";
    else
        cout << "O número " << n << " é negativo.";
}