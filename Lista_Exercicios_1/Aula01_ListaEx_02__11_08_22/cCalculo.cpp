/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

#include "cCalculo.h"


/* 
 * File:   cCalculo.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 11:07
 */

#include "cCalculo.h"
#include <iostream>
#include <cmath>

using namespace std;

cCalculo::cCalculo() {
}

cCalculo::cCalculo(const cCalculo& orig) {
}

cCalculo::~cCalculo() {
}

void cCalculo::insert(){
    cout << "Este programa faz o calculo da expressão d = r+s/2, sendo r = (a+b)² e s = (b+c)².";
    cout << endl << "Insira os valores respectivamentes de a, b e c: ";
    cin >> this->a; 
    cin >> this->b; 
    cin >> this->c;
    
    cout << "O valor da expressão é: "<< this->calculo();
}

float cCalculo::calculo(){
    float d, r, s;
    r = pow(a+b,2);
    s = pow(b+c,2);
    return (r+s)/2;
}

