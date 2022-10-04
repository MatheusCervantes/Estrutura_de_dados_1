/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 16:57
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

void cMedia::insert(){
    float n1, n2, n3;
    cout << "Este programa faz o cálculo da média de três notas, cada uma tendo seu próprio peso, respectivamente 2, 3 e 5." << endl;
    cout << "Insira a nota 1: ";
    cin >> n1;
    cout << "Insira a nota 2: ";
    cin >> n2;
    cout << "Insira a nota 3: ";
    cin >> n2;
    cout << "A média destas 3 notas foi: " << this->media(n1, n2, n3);
}

float cMedia::media(float n1, float n2, float n3) {
    return (n1*2 + n2*3 + n3*5)/10;
}
