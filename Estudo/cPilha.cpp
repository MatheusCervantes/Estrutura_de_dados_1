/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPilha.cpp
 * Author: matheus
 * 
 * Created on November 22, 2022, 6:54 PM
 */

#include <stddef.h>
#include <cstdlib>
#include <iostream>

#include "cPilha.h"

using namespace std;

cPilha::cPilha() {
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}

void cPilha::inserirPilha(int valor){
    this->aux = (struct Pilha *) malloc(sizeof(this->aux));
    this->aux->elemento = valor;
    this->aux->ant = this->topo;
    this->topo = this->aux;
    //cout << this->topo->elemento;
}

void cPilha::listarPilha(){
    this->aux = this->topo;
    if (this->vazio()==true)
        cout << "Pilha está vázia." <<endl <<endl <<endl;
    else {
        system ("clear");
        for (; aux->ant != NULL;) {
            cout << this->aux->elemento << endl;
            this->aux = this->aux->ant;
        }
        cout << this->aux->elemento << endl << endl;
    }
}

void cPilha::removerPilha(){
    if (this->vazio()==true)
        cout << "Pilha vázia."<<endl <<endl <<endl;
    else {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        this->aux->ant = NULL;
        free(this->aux);
    }     
}

void cPilha::menu() {
    this->topo = NULL;
    int opc, valor;
    while (opc!=7) {    
    cout << "1-Inserir na pilha.";
    cout << endl << "2-Remover da pilha.";
    cout << endl << "3-Listar pilha.";
    cout << endl << "4-Listar recursivo.";
    cout << endl << "5-Mostrar meio.";
    cout << endl << "6-Pesquisar na pilha.";
    cout << endl << "7-Sair." << endl << endl;
    cin >> opc;
    switch (opc) {
        case 1:
            cout << "Insira o valor que deseja inserir: ";
            cin >> valor;
            this->inserirPilha(valor);
            system("clear");
        break;
        case 2:
            this->removerPilha();
        break; 
        case 3:
            this->listarPilha();
        break;
        case 4:
            this->aux = this->topo;
            this->imprimir_recursivo(this->aux);
        break;    
        case 5:
            this->mostrarmeio();
        break;
       case 6:
            cout << "Insira o valor que deseja saber se está na pilha: ";
            cin >> valor;
            system("clear");
            if (this->pesquisa(valor))
                cout << endl << "Valor encontrado." << endl << endl;
            else
                cout << endl << "Valor não encontrado." << endl << endl;
        break; 
        case 7:
            system("clear");
        break;
        default:
            cout << "Opção inválida." << endl;
        }
    }
}

bool cPilha::pesquisa(int valor) {
    Pilha *aux;
    aux = this->topo;
    if (this->vazio()==true)
        cout << "A pilha está vázia." <<endl <<endl <<endl;
    else {
        for (; aux->ant!=NULL;) {
            if (aux->elemento == valor) {
                return true;
            }
            aux = aux->ant;
        }
        if (aux->elemento==valor)
            return true;
        else
            return false;
    }
}

bool cPilha::vazio() {
    if (this->topo == NULL) 
        return true;
    else
        return false;
}

void cPilha::mostrarmeio() {
    int contador;
    this->aux = this->topo;
    while (this->aux->ant!=NULL){
        contador++; 
        this->aux = this->aux->ant;
    }
    contador++;
    
    this->aux = this->topo;
    
    for (int n=0; n < contador/2; n++)
        this->aux=this->aux->ant;
    cout << this->aux->elemento << endl;
}

Pilha cPilha::imprimir_recursivo (Pilha *auxiliar) {
    if (auxiliar->ant != NULL) {
        cout << auxiliar->elemento << endl;
        return imprimir_recursivo(auxiliar->ant);
    }
    else {
        cout << auxiliar->elemento << endl;
        return *auxiliar;     
    }
}