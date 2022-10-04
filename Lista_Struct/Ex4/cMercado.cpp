/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMercado.cpp
 * Author: matheus
 * 
 * Created on September 9, 2022, 5:15 PM
 */

#include "cMercado.h"
#include <string>;
#include <iostream>;

using namespace std;

cMercado::cMercado() {
}

cMercado::cMercado(const cMercado& orig) {
}

cMercado::~cMercado() {
}

void cMercado::insert(){
    int n;
    cout << "Insira quantos produtos deseja cadastrar: ";
    cin >> n;
    system("clear");
    produto Produto[n];
    for (int f = 0; f<n; f++){
        cout << endl <<  "Insira o nome do produto " << f+1 <<": ";
        cin >> Produto[f].nome;
        cout << "Insira o código do produto " << f+1 <<": ";
        cin >> Produto[f].codigo;
        cout << "Insira o valor do produto " << f+1 <<": ";
        cin >> Produto[f].preco;
    }
    this->PesquisarCodigo(Produto, n);
}

int cMercado::PesquisaSequencial(produto Produto[], int cod, int n) {
    for (int f = 0; f<n; f++){
        if (Produto[f].codigo == cod)
            return f;
    }
    return -1;
}

void cMercado::PesquisarCodigo(produto Produto[], int n) {
    int cod, ind;
    system("clear");
    cout << "Insira o código que deseja pesquisar: ";
    cin >> cod;
    ind = this->PesquisaSequencial(Produto, cod, n);
    if (ind ==-1) {
        system("clear");
        cout << "Código não encontrado.";
    }
    else 
        this->imprimir(Produto, ind);
}

void cMercado::imprimir(produto Produto[], int n) {
    system("clear");
    cout << "O preço do produto " << Produto[n].nome << ", de código " << Produto[n].codigo << " é: " << Produto[n].preco;
}
