/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCalculo.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 10:24
 */

#include "cCalculo.h"
#include <iostream>
#include <limits.h>
#include <cmath>

using namespace std;

cCalculo::cCalculo() {
}

cCalculo::cCalculo(const cCalculo& orig) {
}

cCalculo::~cCalculo() {
}

void cCalculo::insert(){
    cout << "Insira os valores respectivamente do ponto P1(x1,y1): ";
    cin >> this->x1;
    cin >> this->y1;
    cout << endl << "Insira os valores respectivamente do ponto P1(x2,y2): ";
    cin >> this->x2;
    cin >> this->y2;
    cout << endl;
}
void cCalculo::print(){
    cout << "O valor da distância é de: " << sqrt(pow((this->x2 - this->x1),2) + pow((this->y2 - this->y1),2));
}




