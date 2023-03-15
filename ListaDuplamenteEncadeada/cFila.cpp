/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFila.cpp
 * Author: aluno
 * 
 * Created on 27 de outubro de 2022, 10:21
 */

#include <iostream>
#include "cFila.h"

using namespace std;

cFila::cFila() {
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}

bool cFila::vazio(struct nodo *campo) {

    if (campo == NULL)
        return false;
    else
        return true;
}

void cFila::insere(){
    int x;
    
    cout << "Insira um valor: ";
    cin >> x;
    
    this->aux = (struct nodo *)malloc(sizeof(this->aux));
    this->aux->elem = x;
    
    if(this->inicio == NULL){
        this->aux->ant=NULL;
        this->aux->prox=NULL;
        this->inicio = this->aux;
    }
    else {
        this->aux->prox=NULL;
        this->aux->ant=this->fim;
        this->fim->prox=this->aux;
    }
    
    this->fim = this->aux;
    system("clear");
}

void cFila::removr(void) {
    if (vazio(this->inicio)) {
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        free(this->aux);
        cout << "\nRemovido com sucesso!\n\n";
    }
}

void cFila::listar(void) {
    system("clear");
    cout << "Deseja listar pelo fim ou pelo inicio? " << endl << "1-Inicio " << endl << "2-Fim" << endl;
    int opc;
    cin >> opc;
    system("clear");
    
    if (opc == 1){
    nodo *p;
    p = this->inicio;
    
    while (vazio(p->prox)) {
        cout << "\nITEM " << p->elem;
        p = p->prox;
    }
    cout << "\nITEM " << p->elem << "\n\n";
    }
    
    else if (opc == 2){
    nodo *p;
    p = this->fim;
    
    while (vazio(p->ant)) {
        cout << "\nITEM " << p->elem;
        p = p->ant;
    }
    cout << "\nITEM " << p->elem << "\n\n";
    }
    
    else
        cout << "Opção inválida";
}



void cFila::menu(void) {
    char op;
    int sair = 0;

    this->inicio = NULL;
    
    for (; sair == 0;) {
        cout << "1 -> Insere na fila\n2 -> Remove da fila\n";
        cout << "3 -> Listar fila\n4 -> Sair da fila\n";
        cout << "\nDigite uma opção: ";
        cin>>op;
        switch (op) {
            case '1': insere();
                break;
            case '2': removr();
                break;
            case '3': listar();
                break;
            case '4': sair = 1;
                break;
            default:
            {
                cout << "Opção invalida! \n";
                break;
            }
        }
    }
}