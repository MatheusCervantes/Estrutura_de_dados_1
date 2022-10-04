/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cTempo.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 17:14
 */

#include "cTempo.h"
#include <iostream>

using namespace std;

cTempo::cTempo() {
}

cTempo::cTempo(const cTempo& orig) {
}

cTempo::~cTempo() {
}

void cTempo::insert(){
    float s=0;
    cout << "Este programa faz a conversão de segundos em horas: ";
    cout << "Insira o valor em segundos para ser convertido: ";
    cin >> s;
    cout << "O tempo foi de: ";
    if (this->horas(s)>0)
        cout << this->horas(s) << " hora(s)";
    if (this->minutos(s)>0)
        cout << this->minutos(s) << " minuto(s)";
    if (this->segundos(s)>=0)
        cout << this->segundos(s) << " segundo(s)";
}

float cTempo::horas (int a) {
    return a/3600;
}

float cTempo::minutos (int a) {
    int s;
    s = (a%3600)/60;
    return s;
}

float cTempo::segundos (int a) {
    return (a%3600)%60;
}