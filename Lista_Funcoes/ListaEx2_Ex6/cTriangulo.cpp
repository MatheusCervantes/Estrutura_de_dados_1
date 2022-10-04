/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cTriangulo.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 10:07
 */

#include "cTriangulo.h"
#include <iostream>
#include <string>

using namespace std;

cTriangulo::cTriangulo() {
}

cTriangulo::cTriangulo(const cTriangulo& orig) {
}

cTriangulo::~cTriangulo() {
}

void cTriangulo::insert(){
    double a, b, c;
    cout << "Este programa indentifica se o triângulo é equilátero, isósceles ou escaleno. " <<endl;
    cout << "Insira os valor dos 3 lados do triângulo: ";
    cin >> a >> b >> c;
    cout << endl << "O triângulo é " << this->triangulo(a,b,c);
}   

string cTriangulo::triangulo (double a, double b, double c){
    if (a == b && a == c)
        return "Equilátero. ";
    else if (a==b || a==c || b==c)
        return "Isósceles. ";
    else
        return "Escaleno. ";  
}