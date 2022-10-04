/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPessoa.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 10:34
 */

#include "cPessoa.h"
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::cadPessoa(){
    for(int i=0; i<=1; i++){
        cout << "Digite nome: ";
        cin >> this->VetPessoas[i].nome;
        cout << "Digite o endereço: ";
        cin >> this->VetPessoas[i].end;
        cout << "Digite o telefone 1: ";
        cin >> this->VetPessoas[i].tell;
        cout << "Digite o telefone 2: ";
        cin >> this->VetPessoas[i].tel2;
        cout << endl;
    }
}

void cPessoa::impDadosPessoa(){
    for(int i=0; i<=1; i++){
        cout << endl << this->VetPessoas[i].nome << endl;
        cout << this->VetPessoas[i].end << endl;
        cout << this->VetPessoas[i].tell << endl;
        cout << this->VetPessoas[i].tel2 << endl;
    }
}