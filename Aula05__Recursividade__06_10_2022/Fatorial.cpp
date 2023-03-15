/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fatorial.cpp
 * Author: aluno
 * 
 * Created on 6 de outubro de 2022, 10:34
 */

#include "Fatorial.h"
#include <iostream>
#include <string>

using namespace std;

Fatorial::Fatorial() {
}

Fatorial::Fatorial(const Fatorial& orig) {
}

Fatorial::~Fatorial() {
}

int Fatorial::factorial (int a) {
    if (a > 1)
        return (a * factorial (a-1));
    else
        return (1);
}

void Fatorial::insert () {
    int n;
    cout << "Please type a number: ";
    cin >> n;
    cout << n << "! = " << this->factorial(n) <<endl; 
}