/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMaior.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 22:22
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

void cMaior::insert(){
    double a, b, c;
    cout << "Este programa mostra qual é o maior número dos inseridos. " << endl;
    cout << "Insira o primeiro número: ";
    cin >> a;
    cout << "Insira o segundo número: ";
    cin >> b;
    cout << "Insira o terceiro número: ";
    cin >> c;
    cout << endl;
    if (a > b && a > c ) 
        cout << "O maior número é o: " << a;
    else if (b > a && b > c ) 
        cout << "O maior número é o: " << b; 
    else if (c > b && c > b ) 
        cout << "O maior número é o: " << c; 
}