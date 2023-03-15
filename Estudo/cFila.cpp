/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFila.cpp
 * Author: matheus
 * 
 * Created on November 22, 2022, 6:54 PM
 */

#include "cFila.h"
#include <iostream>

using namespace std;

cFila::cFila() {
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}

void cFila::removerFila(){
    this->aux = this->inicio;
    this->inicio = this->inicio->prox;
    free(this->aux);
}

void cFila::inserirFila(int valor){
    this->aux = (Fila*) malloc(sizeof(this->aux));
    this->aux->elemento = valor;
    if (this->fim==NULL)
        this->inicio = this->aux;
    else {
        this->fim->prox = this->aux;
        this->aux->prox = NULL;
    }
    this->fim = this->aux;
}

void cFila::listarFila(){
    if (this->vazio()==true)
        cout << "Fila vazia." << endl << endl;
    else {
        this->aux = this->inicio;
        system ("clear");
        while (this->aux->prox != NULL) {
            cout << this->aux->elemento <<endl;
            this->aux = this->aux->prox;
        }
        cout << this->aux->elemento <<endl << endl;
    }
}

void cFila::menu(){
    this->inicio = NULL;
    this->fim = NULL;
    int opc, valor;
    while (opc!=6) {    
    cout << "1-Inserir na fila.";
    cout << endl << "2-Remover da fila.";
    cout << endl << "3-Listar fila.";
    cout << endl << "4-Pesquisar na fila.";
    cout << endl << "5-Verificar valor.";
    cout << endl << "6-Sair." << endl << endl;
    cin >> opc;
    switch (opc) {
        case 1:
            cout << "Insira o valor que deseja inserir: ";
            cin >> valor;
            system("clear");
            this->inserirFila(valor);
        break;
        case 2:
            if (this->vazio() == true)
                cout << endl << "Fila vázia." << endl << endl;
            else
                this->removerFila();
        break; 
        case 3:
            this->listarFila();
        break; 
        case 4:
            cout << "Insira o valor que deseja saber se está na Fila: ";
            cin >> valor;
            system("clear");
            if (this->vazio())
                cout << endl << "Fila vázia." << endl << endl;
            else { 
                if (this->pesquisa(valor))
                    cout << endl << "Valor encontrado." << endl << endl;
                else
                    cout << endl << "Valor não encontrado." << endl << endl;
                }
        break;
        case 5:
            cout << "Insira o valor que deseja verificar: ";
            cin >> valor;
            system("clear");
            this->verificar(valor);
        break;
        case 6:
            system("clear");
        break;
        default:
            cout << "Opção inválida." << endl;
        }
    }
}

bool cFila::pesquisa(int valor){
    this->aux = this->inicio;
    while (this->aux->prox != NULL) {
        if (this->aux->elemento == valor)
            return true;
        this->aux = this->aux->prox;
    }
    if (this->aux->elemento == valor)
        return true;
    else
        return false;
}

bool cFila::vazio(){
    if (this->inicio==NULL)
        return true;
    else
        return false;
}

void cFila::verificar (int valor) {
    this->aux = this->inicio;
    bool controle;
    while (this->aux->prox != NULL) {
        if (this->aux->elemento==valor) {
            controle = true;
            cout << "Valor já foi inserido." << endl << endl;
        }
        this->aux = this->aux->prox;
    }
    if (this->aux->elemento==valor) {
        controle = true;
        cout << "Valor já foi inserido." << endl << endl;
    }
    else
        controle = false;
    if (controle==false) 
       this->inserirFila(valor);
}