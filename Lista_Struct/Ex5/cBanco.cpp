/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cBanco.cpp
 * Author: matheus
 * 
 * Created on September 9, 2022, 6:15 PM
 */

#include "cBanco.h"

cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco::insert() {
    conta Conta[3];
    int g;
    for (int f = 0; f<3; f++) {
        system("clear");
        cout << "Conta "<< f+1 << endl;
        cout << "Nome: ";
        cin >> Conta[f].nome;
        cout << "CPF: ";
        cin >> Conta[f].cpf;
        cout << "Insira o saldo inicial para a criação da conta: ";
        cin >> Conta[f].saldo;
    }
    system("clear");
    while (g !=-1){
        cout << "Deseja fazer um saque? Digite 1"<< endl;
        cout << "Deseja fazer um depósito? Digite 2."<< endl;
        cout << "Digite -1 para sair." << endl;
        cout << "Digite a opção desejada: ";
        cin >> g;
        switch (g){
            case 1:
                this->saque(Conta);
            break;
            case 2:
                this->deposito(Conta);
            break;
            case -1:
            break;    
            default:
                cout << "Opção inválida." << endl;
        }
    }
}

void cBanco::imprimir(conta Conta[], int n){
    system("clear");
    cout << "Nome do dona da conta: " << Conta[n].nome << endl;
    cout << "O saldo atual é: " << Conta[n].saldo << endl << endl;
}

void cBanco::saque(conta Conta[]){
    long int n;
    int ind;
    float saque;
    cout << "Insira o CPF da conta deseja efetuar o saque: ";
    cin >> n;
    ind = this->PesquisaSequencial(Conta, n, 3);
    if (ind==-1)
        cout << "Conta inválida.";
    else {
        cout << "Insira o valor do saque: ";
        cin >> saque;
        Conta[ind].saldo = Conta[ind].saldo-saque;
        this->imprimir(Conta, ind);
    }
}

void cBanco::deposito(conta Conta[]){
    long int n;
    int ind;
    float deposito;
    cout << "Insira o CPF da conta deseja efetuar o saque: ";
    cin >> n;
    ind = this->PesquisaSequencial(Conta, n, 3);
    if (ind==-1)
        cout << "Conta inválida.";
    else {
        cout << "Insira o valor do depósito: ";
        cin >> deposito;
        Conta[ind].saldo = Conta[ind].saldo+deposito;
        this->imprimir(Conta, ind);
    }
}

int cBanco::PesquisaSequencial(conta Conta[], long int chave, int n){
    for (int f=0; f<n; f++)
        if (Conta[f].cpf==chave)
            return f;
    return -1;
}
