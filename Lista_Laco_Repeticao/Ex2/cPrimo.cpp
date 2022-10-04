/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPrimo.cpp
 * Author: matheus
 * 
 * Created on September 8, 2022, 7:00 PM
 */

#include "cPrimo.h"
#include <iostream>

using namespace std;

cPrimo::cPrimo() {
}

cPrimo::cPrimo(const cPrimo& orig) {
}

cPrimo::~cPrimo() {
}

int cPrimo::comparar (int n){
    /*if (n==1 || n==2)
        return 0;
    */
    int divisores = 0;
    for (int f=1; f <= n; f++){
        if (n%f==0)
            divisores++;
    }
    
    if (divisores >2)
        return 1;
    else
        return 0;
}

void cPrimo::inserir(){
    float n;
    cout << "Insira um número que deseja indentificar se é primo ou não: ";
    cin >> n;
    if (this ->comparar(n)==1)
        cout << "O número " << n << " não é primo.";
    else 
        cout << "O número " << n << " é primo.";
}