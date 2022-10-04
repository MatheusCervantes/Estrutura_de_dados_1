/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCarro.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 20:27
 */

#include "cCarro.h"
#include <iostream>

using namespace std;

cCarro::cCarro() {
}

cCarro::cCarro(const cCarro& orig) {
}

cCarro::~cCarro() {
}

void cCarro::insert(){
    double cv;
    cout << "Este programa cálcula o preço de venda de um carro." << endl;
    cout << "Insira o preço de fábrica do carro: ";
    cin >> cv;
    cout << "O preço de venda é de: " << this->calculo(cv);
}

double cCarro::calculo (double c) {
    return c * 1.28 + c * 1.45 + c;
}