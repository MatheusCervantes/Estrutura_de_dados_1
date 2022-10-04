/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 22:30
 */

#include "cMedia.h"
#include <iostream>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::insert(){
    long int cd;
    double n1, n2, n3;
    cout << "Este programa a média ponderada." << endl << endl;
    cout << "Insira seu código: ";
    cin >> cd;
    cout << "Insira sua primeira nota: ";
    cin >> n1;
    cout << "Insira sua segunda nota: ";
    cin >> n2;
    cout << "Insira sua terceira nota: ";
    cin >> n3;
    cout << endl << "Código do aluno: " << cd << endl << "Nota 1: " << n1 << endl << "Nota 2: " << n2 << endl << "Nota 3: " << n3 << endl << "Média: " << this->media(n1, n2, n3);
}

double cMedia::media(double n1, double n2, double n3){
    return (n1*4+n2*3+n3*3)/10;
}