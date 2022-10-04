/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNotas.cpp
 * Author: matheus
 * 
 * Created on September 8, 2022, 11:43 PM
 */

#include "cNotas.h"
#include <iostream>
#include <string>

using namespace std;

cNotas::cNotas() {
}

cNotas::cNotas(const cNotas& orig) {
}

cNotas::~cNotas() {
}

void cNotas::insert (){
    int n=0;
    cout << "Insira quantos alunos vai cadastrar: ";
    cin >> n;
    aluno Pessoas[n];
    for (int f = 0; f<n; f++){
        cout << endl << "Insira o nome do aluno: ";
        cin >> Pessoas[f].nome;
        cout << "Insira a matricula do aluno: ";
        cin >> Pessoas[f].matricula;
        cout << "Insira a nota 1 do aluno: ";
        cin >> Pessoas[f].n1;
        cout << "Insira a nota 2 do aluno: ";
        cin >> Pessoas[f].n2;
        cout << endl;
    }
    system("clear");
    this->imprimir(Pessoas, n);
}

void cNotas::imprimir(aluno Pessoas[], int n){
    for (int f = 0; f<n; f++){
        cout << "Nome do aluno " << f+1 << ": " << Pessoas[f].nome <<endl;
        cout << "Matricula do aluno " << f+1 << ": " << Pessoas[f].matricula <<endl;
        cout << "Nota 1 do aluno " << f+1 << ": " << Pessoas[f].n1 <<endl;
        cout << "Nota 2 do aluno " << f+1 << ": " << Pessoas[f].n2 <<endl;
        cout << "A média do aluno " << f+1 << ": " << (Pessoas[f].n1+Pessoas[f].n2)/2 <<endl <<endl;
    }
}