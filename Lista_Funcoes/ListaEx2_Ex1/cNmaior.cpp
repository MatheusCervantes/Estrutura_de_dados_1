/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNmaior.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:10
 */

#include "cNmaior.h"
#include <iostream>

using namespace std;

cNmaior::cNmaior() {
}

cNmaior::cNmaior(const cNmaior& orig) {
}

cNmaior::~cNmaior() {
}
void cNmaior::insert(){
    int n1, n2;
    cout << "Este programa indentifica qual o maior número.\n";
    cout << "Insira o numero 1: ";
    cin >> n1;
    cout << "Insira o número 2: ";
    cin >> n2;
    cout << endl << "O maior número é: " << this->mnumero(n1 ,n2);
}

int cNmaior::mnumero(int n1, int n2){
    if (n1 > n2)
        return n1;
    else
        return n2;
}