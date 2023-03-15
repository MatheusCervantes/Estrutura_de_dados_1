/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Teste.cpp
 * Author: matheus
 * 
 * Created on November 22, 2022, 3:04 PM
 */

#include "Teste.h"
#include <iostream>

using namespace std;

Teste::Teste() {
}

Teste::Teste(const Teste& orig) {
}

Teste::~Teste() {
}

void Teste::insert (){
    int x, y;
    cin >> x;
    cin >> y;
    this->referencia(&x,&y);
    cout << x << endl <<y;
}

void Teste::referencia(int *x, int *y){
    *x = *x+1;
    *y = *y-1;
}

    
void Teste::Valor(int x, int y){
    x++;
    y--;
}
    