/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cBanco.h
 * Author: matheus
 *
 * Created on September 9, 2022, 6:15 PM
 */

#ifndef CBANCO_H
#define CBANCO_H
#include <iostream>

using namespace std;

struct conta {
    long int cpf;
    string nome;
    float saldo;
};

class cBanco {
public:
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    void insert();
    void imprimir(conta Conta[], int n);
    void saque(conta Conta[]);
    void deposito(conta Conta[]);
    int PesquisaSequencial(conta Conta[], long int chave, int n);
private:

};

#endif /* CBANCO_H */

