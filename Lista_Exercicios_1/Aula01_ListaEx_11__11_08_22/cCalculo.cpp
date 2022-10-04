/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCalculo.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 21:50
 */

#include "cCalculo.h"
#include <iostream>

using namespace std;

cCalculo::cCalculo() {
}

cCalculo::cCalculo(const cCalculo& orig) {
}

cCalculo::~cCalculo() {
}

void cCalculo::insert() {
    int n1, n2;
    cout << "Este programa verifica se os 2 números inseridos são múltiplós." << endl;
    cout << "Insira o primeiro número: ";
    cin >> n1;
    cout << "Insira o segundo número: ";
    cin >> n2;
    if (n1%n2==0||n2%n1==0)
        cout << "São múltiplos.";
    else
        cout << "Não são múltiplos.";
}