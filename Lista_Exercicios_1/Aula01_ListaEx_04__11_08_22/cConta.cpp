/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cConta.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 15:50
 */

#include "cConta.h"
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

cConta::cConta() {
}

cConta::cConta(const cConta& orig) {
}

cConta::~cConta() {
}

void cConta::insert(){
    int idade;
    cout << "Insira sua idade em dias: ";
    cin >> idade;
    cout << endl << "Sua idade é: ";
    if (this->calculoanos(idade)>0)
        cout << this->calculoanos(idade) << " ano(s) ";
    if (this->calculomeses(idade)>0)
        cout << this->calculomeses(idade) << " mese(s) ";
    if (this->calculodias(idade)>0)
        cout << this->calculodias(idade) << " dia(s).";
}

int cConta::calculoanos(int a){
    return a/365;
}
int cConta::calculomeses(int a){
    return (a%365)/30;
}
int cConta::calculodias(int a){
    return (a%365)%30;
}