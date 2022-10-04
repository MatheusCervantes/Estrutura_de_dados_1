/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNadador.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 21:58
 */

#include "cNadador.h"
#include <iostream>

using namespace std;

cNadador::cNadador() {
}

cNadador::cNadador(const cNadador& orig) {
}

cNadador::~cNadador() {
}

void cNadador::insert() {
    int idade;
    cout << "Este programa classifica qual é sua categoria na natação." << endl;
    cout << "Insira sua idade: ";
    cin >> idade;
    cout << endl;
    if (idade >=5 && idade <= 7)
        cout << "Sua classe é Infantil A.";
    else if (idade >=8 && idade <= 10)
        cout << "Sua classe é Infantil B.";
    else if (idade >=11 && idade <= 13)
        cout << "Sua classe é Juvenil A.";
    else if (idade >=14 && idade <= 17)
        cout << "Sua classe é Juvenil B.";
    else if (idade >=18)
        cout << "Sua classe é Adulto.";
    else if (idade < 5)
        cout << "Não pode se matricular pois ainda não tem a idade mínima.";
}
