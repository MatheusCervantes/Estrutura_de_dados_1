/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNneg.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:19
 */

#include "cNneg.h"
#include <iostream>

using namespace std;

cNneg::cNneg() {
}

cNneg::cNneg(const cNneg& orig) {
}

cNneg::~cNneg() {
}
void cNneg::insert(){
    int numero;
    cout << "Este programa identifica se o valor é positivo, negativo ou zero." <<endl ;
    cout << "-1 - para negativos \n 1 - para positivos \n 0 - para zero";
    cout << endl << "Insira um número: ";
    cin >> numero;
    cout << this->descisao(numero);
}

int cNneg::descisao(int n){
    if (n>0)
        return 1;
    else if (n<0)
        return -1;
    else
        return 0;
}