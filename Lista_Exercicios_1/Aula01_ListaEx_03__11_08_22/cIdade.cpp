/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */
/* 
 * File:   cIdade.cpp
 * Author: matheus
 * 
 * Created on 11 de agosto de 2022, 21:07
 */

#include "cIdade.h"
#include <iostream>

using namespace std;

cIdade::cIdade() {
}

cIdade::cIdade(const cIdade& orig) {
}

cIdade::~cIdade() {
}

void cIdade::insert(){
    int anos, meses, dias;
    cout << "Este programa mostra sua idade exate em dias." << endl;
    cout << "Insira sua idade em anos inteiros: ";
    cin >> anos;
    cout << "Insira quantos meses você tem: ";
    cin >> meses;
    cout << "Insira quantos dias você tem: ";
    cin >> dias;
    cout << "A sua idade em dias é: " << this->calculo(anos, meses, dias);
}

int cIdade::calculo(int a, int b, int c){
    int idade;
    idade = a*365+b*30+c;
    return idade;
}