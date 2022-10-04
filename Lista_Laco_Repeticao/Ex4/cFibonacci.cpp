/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFibonacci.cpp
 * Author: matheus
 * 
 * Created on September 8, 2022, 9:10 PM
 */

#include "cFibonacci.h"
#include <iostream>

using namespace std;

cFibonacci::cFibonacci() {
}

cFibonacci::cFibonacci(const cFibonacci& orig) {
}

cFibonacci::~cFibonacci() {
}

void cFibonacci::mostrar() {
    int vet[20];
    vet[0]= 1;
    vet[1]= 1;
    for (int n=2; n < 20; n++){
        vet[n] = (vet[n-1]+vet[n-2]);
    }
    for (int n=0; n < 20; n++){
        cout << vet[n] << ", ";
    }
    cout << " ... etc.";
}
