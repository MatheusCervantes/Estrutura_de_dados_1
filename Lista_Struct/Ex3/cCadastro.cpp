/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCadastro.cpp
 * Author: matheus
 * 
 * Created on September 9, 2022, 3:59 PM
 */

#include "cCadastro.h"
#include <string>
#include <iostream>

using namespace std;


cCadastro::cCadastro() {
}

cCadastro::cCadastro(const cCadastro& orig) {
}

cCadastro::~cCadastro() {
}

void cCadastro::insert(){
    int n;
    cout << "Quantas pessoas deseja cadastrar: ";
    cin >> n;
    system("clear");
    cpessoa Pessoa[n];
    for (int f = 0; f < n; f++) {
        cout << endl << "Insira o nome da pessoa " << f+1 << ": ";
        cin >> Pessoa[f].nome;
        cout << "Insira o CPF da pessoa " << f+1 << ": ";
        cin >> Pessoa[f].cpf;
    }
    this->buscarpessoa(Pessoa, n);
}

void cCadastro::imprimir(cpessoa Pessoa[], int n){
    cout << "O proprietário do CPF é: ";
    cout << Pessoa[n].nome;
}

int cCadastro::buscarCPF_sequencial(cpessoa Pessoa[], long int cpf, int n) {
    for(int i=0; i<n; i++){
        if (Pessoa[i].cpf == cpf)
            return i;
    }
    return -1;
}

int cCadastro::buscarCPF_binario (cpessoa Pessoa[], long int cpf, int n){
    int inf,sup,meio;
    inf=0;
    sup=n-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (cpf==Pessoa[meio].cpf)
            return meio;
        else if (cpf<Pessoa[meio].cpf)
            sup=meio-1;
        else
            inf=meio+1;
 }
 return -1; /* não encontrado */
}

void cCadastro::bolha (cpessoa Pessoa[], int n) {
    int i, j;
    cpessoa temp;
    bool troca;
    troca = true;
    for (i= n-1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j= 0; j < i ;j++) {
            if (Pessoa[j].cpf > Pessoa[j+1].cpf) {
                temp = Pessoa[j];
                Pessoa[j] = Pessoa[j+1];
                Pessoa[j+1] = temp;
                troca = true;
            }
        }
    }
}

void cCadastro::buscarpessoa(cpessoa Pessoa[], int n){
    system("clear");
    long int cpf;
    int ind;
    cout << "Insira o CPF que você quer buscar: ";
    cin >> cpf;
    
    //Busca sequencial
    /*ind = this->buscarCPF_sequencial(Pessoa, cpf, n);
    if (ind ==-1)
        cout << "CPF não encontrado.";
           else
                     this->imprimir(Pessoa, ind); */
    
    //Busca Binária
    this->bolha(Pessoa, n);
    ind = this->buscarCPF_binario(Pessoa, cpf, n);
    if (ind ==-1)
        cout << "CPF não encontrado.";
    else
        this->imprimir(Pessoa, ind);
}