/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMaior.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 21:13
 */

#include "cMaior.h"
#include <iostream>

using namespace std;

cMaior::cMaior() {
}

cMaior::cMaior(const cMaior& orig) {
}

cMaior::~cMaior() {
}

void cMaior::insert() {
    int n1, n2, n3;
    cout << "Este programa te mostra o maior número inserido." <<endl;
    cout << "Insira o primeiro número: ";
    cin >> n1;
    cout << "Insira o segundo número:";
    cin >> n2;
    cout << "Insira o terceiro número: ";
    cin >> n3;
    
    if (n1 > n2 && n1 > n3) 
        cout << "O maior número é: " << n1;
    else if (n2 > n1 && n2 > n3) 
        cout << "O maior número é: " << n2;
    else if (n3 > n1 && n3 > n2) 
        cout << "O maior número é: " << n3;
}