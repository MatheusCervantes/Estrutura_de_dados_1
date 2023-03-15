/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cDuplamenteEncadeada.cpp
 * Author: matheus
 * 
 * Created on November 22, 2022, 6:54 PM
 */

#include <cstdlib>
#include <iostream>
#include "cDuplamenteEncadeada.h"

using namespace std;

cDuplamenteEncadeada::cDuplamenteEncadeada() {
}

cDuplamenteEncadeada::cDuplamenteEncadeada(const cDuplamenteEncadeada& orig) {
}

cDuplamenteEncadeada::~cDuplamenteEncadeada() {
}

void cDuplamenteEncadeada::calcMeio() {
    int cont = 0;
    this->aux = this->inicio;
    while (this->aux != NULL) {
        cont++;
        this->aux = this->aux->prox;
    }
    cont++;
    
    cont = cont / 2;
    this->aux = this->inicio;

    for (int n = 1; n < cont; n++) {
        this->aux = this->aux->prox;
    }

    this->meio = this->aux;
}

void cDuplamenteEncadeada::inserirFim(int valor) {
    this->aux = (DuplamenteEncadeada *) malloc(sizeof (this->aux));
    this->aux->elem = valor;

    if (this->inicio == NULL) {
        this->inicio = this->aux;
        this->inicio->ant = NULL;
        this->inicio->prox = this->fim;
    } else {
        this->aux->ant = this->fim;
        this->aux->prox = NULL;
        this->fim->prox = this->aux;
    }

    this->fim = this->aux;
}

void cDuplamenteEncadeada::inserirMeio(int valor) {
    this->calcMeio();
    this->aux = (DuplamenteEncadeada *) malloc(sizeof (this->aux));
    this->aux->elem = valor;
    this->aux->prox = this->meio->prox;
    this->meio->prox = this->aux;
    this->aux->ant = this->meio;
}

void cDuplamenteEncadeada::inserirInicio(int valor) {
    this->aux = (DuplamenteEncadeada *) malloc(sizeof (this->aux));
    this->aux->elem = valor;

    if (this->inicio == NULL) {
        this->inicio = this->aux;
        this->inicio->ant = NULL;
        this->inicio->prox = this->fim;
    } else {
        this->aux->prox = this->inicio;
        this->inicio->ant = this->aux;
        this->aux->ant = NULL;
    }

    this->inicio = this->aux;
}

void cDuplamenteEncadeada::listarInicio() {
    if (this->vazio())
        cout << "Lista vázia" << endl << endl;
    else {
        this->aux = this->inicio;
        while (this->aux->prox != NULL) {
            cout << this->aux->elem << endl;
            this->aux = this->aux->prox;
        }
        cout << this->aux->elem << endl;
    }
}

void cDuplamenteEncadeada::listarMeio() {
    if (this->vazio())
        cout << "Lista vázia" << endl << endl;
    else {
        this->calcMeio();
        cout << this->meio->elem << endl;
    }
}

void cDuplamenteEncadeada::listarFim() {
    if (this->vazio())
        cout << "Lista vázia" << endl << endl;
    else {
        this->aux = this->fim;
        while (this->aux->ant != NULL) {
            cout << this->aux->elem << endl;
            this->aux = this->aux->ant;
        }
        cout << this->aux->elem << endl;
    }
}

void cDuplamenteEncadeada::removerInicio() {
    if (this->vazio())
        cout << "Lista vázia" << endl << endl;
    else {
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        free(this->aux);
    }
}

void cDuplamenteEncadeada::removerFim() {
    if (this->vazio())
        cout << "Lista vázia" << endl << endl;
    else {
        this->aux = this->fim;
        this->fim = this->fim->ant;
        free(this->aux);
    }
}

void cDuplamenteEncadeada::removerMeio() {
    if (this->vazio())
        cout << "Lista vázia" << endl << endl;
    else {
        this->calcMeio();
        this->aux = this->meio;
        this->meio->prox->ant = this->aux->ant;
        this->meio->ant->prox = this->aux->prox;
        free(this->aux);
    }
}

bool cDuplamenteEncadeada::pesquisar(int valor) {
    if (this->vazio())
        cout << "Lista vázia" << endl << endl;
    else {
        this->aux = this->inicio;
        while (this->aux->prox != NULL) {
            if (this->aux->elem == valor)
                return true;
            this->aux = this->aux->prox;
        }
        if (this->aux->elem == valor)
            return true;
        else
            return false;
    }
}

void cDuplamenteEncadeada::inserirValor(int *valor) {
    int n;
    cout << "Insira o valor que deseja inserir: ";
    cin >> *valor;
}

bool cDuplamenteEncadeada::vazio() {
    if (this->inicio == NULL)
        return true;
    else
        return false;
}

void cDuplamenteEncadeada::maiormenor() {
    this->aux = this->inicio;
    int maior, menor;
    for (int n=0; this->aux->prox != NULL; n++) {
        if (n == 0) {
            maior = this->aux->elem;
            menor = maior;
        }
        else {
            if (this->aux->elem > maior)
                maior = this->aux->elem;
            else if (this->aux->elem < menor)
                menor = this->aux->elem;
        }
        this->aux = this->aux->prox;
    }
    
    if (this->aux->elem > maior)
        maior = this->aux->elem;
    else if (this->aux->elem < menor)
        menor = this->aux->elem;
    
    cout << "O maior número é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;
}

void cDuplamenteEncadeada::menu() {
    this->fim = NULL;
    this->inicio = NULL;
    this->meio = NULL;
    this->aux = NULL;
    int opc = -1;
    while (opc != 0) {
        cout << endl << "1 - Inserir início" << endl;
        cout << "2 - Inserir meio" << endl;
        cout << "3 - Inserir fim" << endl;
        cout << "4 - Remover início" << endl;
        cout << "5 - Remover meio" << endl;
        cout << "6 - Remover fim" << endl;
        cout << "7 - Lista início" << endl;
        cout << "8 - Lista meio" << endl;
        cout << "9 - Lista fim" << endl;
        cout << "10 - Pesquisar" << endl;
        cout << "11 - Maior e menor número" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha a opção desejada: ";
        int valor;
        cin >> opc;
        switch (opc) {
            case 1:
                system("clear");
                this->inserirValor(&valor);
                this->inserirInicio(valor);
                break;
            case 2:
                system("clear");
                this->inserirValor(&valor);
                this->inserirMeio(valor);
                break;
            case 3:
                system("clear");
                this->inserirValor(&valor);
                this->inserirFim(valor);
                break;
            case 4:
                system("clear");
                this->removerInicio();
                break;
            case 5:
                system("clear");
                this->removerMeio();
                break;
            case 6:
                system("clear");
                this->removerFim();
                break;
            case 7:
                system("clear");
                this->listarInicio();
                break;
            case 8:
                system("clear");
                this->listarMeio();
                break;
            case 9:
                system("clear");
                this->listarFim();
                break;
            case 10:
                system("clear");
                this->inserirValor(&valor);
                if (this->pesquisar(valor))
                    cout << "Valor encontrado";
                else
                    cout << "Não encontrado";
                break;
            case 11:
                system("clear");
                this->maiormenor();
                break;
            case 0:
                break;
            default:
                system("clear");
                cout << "Opção inválida." << endl;
        }
    }
}