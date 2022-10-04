/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cEnade.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 09:14
 */

#include "cEnade.h"
#include <iostream>

using namespace std;

cEnade::cEnade() {
}

cEnade::cEnade(const cEnade& orig) {
}

cEnade::~cEnade() {
}

void cEnade::insert(){
    for (int i = 0; i<10; i++) {
        int a = i+1;
        this->vetB[i] = 0;
        if (a%2==0)  {
            this->vetA[i]= a;
        }
        else {
            this->vetA[i]= 2*a;
        }
    }
    for (int i = 0; i<10; i++) {
        while (this->vetA[i] > i+1){
            this->vetB[i] = this->vetA[i];
            this->vetA[i] = this->vetA[i]-1;
        }
                
    }
}

void cEnade::print(){
    for (int i = 0; i<10; i++){
        cout << this->vetA[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i<10; i++){
        cout << this->vetB[i] << "\t";
    }
}
