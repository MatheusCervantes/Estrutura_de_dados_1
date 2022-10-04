/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cAltura.cpp
 * Author: matheus
 * 
 * Created on September 8, 2022, 8:36 PM
 */

#include "cAltura.h"
#include <iostream>

using namespace std;

cAltura::cAltura() {
}

cAltura::cAltura(const cAltura& orig) {
}

cAltura::~cAltura() {
}

void cAltura::insert(){
    float a=0, amr=0, amn=0;
    for (int n = 0; n<5; n++) {
    cout << endl << "Insira a altura: ";
    cin >> a;
    if (amr==0 && amn==0){
        amr = a;
        amn = a;
    }
    amr = this->compararAmr(a, amr);
    amn = this->compararAmn(a, amn);
    this->mostrar(amr, amn);
    }
}

float cAltura::compararAmr(float a, float amr){
    if (a > amr)
        return a;
    else 
        return amr;
}

float cAltura::compararAmn(float a, float amn){
    if (a > amn)
        return amn;
    else 
        return a;
}

void cAltura::mostrar(float amr, float amn){
    cout << endl << "A altura maior é " << amr << endl;
    cout << "A altura menor é " << amn << endl;
}