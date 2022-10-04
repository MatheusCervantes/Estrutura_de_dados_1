/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 08:31
 */

#include "cMedia.h"
#include <iostream>
#include <cctype>;

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::insert(){
    char opc;
    cout << "Este programa faz o cálculo da média aritmética ou ponderada." << endl;
    cout << "Insira A para média artimética." << endl;
    cout << "Insira P para média ponderada(pesos: 5, 3 e 2)." << endl;
    cin >> opc;
    opc = toupper(opc);
    cout << endl;
    if (opc == 'A') {
        this->atribuir();
        cout << endl << "A média foi de: " << this->artimetica();
    }
    else if (opc == 'P') {    
        this->atribuir();
        cout << endl << "A média foi de: " << this->ponderada();
    }
    else
        cout << "Opção inválida";
}

double cMedia::artimetica(){
    return (this->nota1+this->nota2+this->nota3)/3;
}
double cMedia::ponderada(){
    return (this->nota1*5+this->nota2*3+this->nota3*2)/10;
}
void cMedia::atribuir(){
    cout << "Insira a nota 1: ";
    cin >> this->nota1;
    cout << "Insira a nota 2: ";
    cin >> this->nota2;
    cout << "Insira a nota 3: ";
    cin >> this->nota3;
}