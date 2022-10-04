/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cVesfera.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:40
 */

#include "cVesfera.h"
#include <iostream>
#include <cmath>

using namespace std;

cVesfera::cVesfera() {
}

cVesfera::cVesfera(const cVesfera& orig) {
}

cVesfera::~cVesfera() {
}

void cVesfera::insert (){
    double r;
    cout << "Este programa calcula o volume de um esfera." <<endl;
    cout << "Insira o valor do raio: ";
    cin >> r;
    cout << this->calcularvolume(r);
}
double cVesfera::calcularvolume (double r){
    return 4/3*3.14*pow(r,3);
}

