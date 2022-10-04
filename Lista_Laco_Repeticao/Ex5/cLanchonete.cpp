/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cLanchonete.cpp
 * Author: matheus
 * 
 * Created on September 8, 2022, 9:30 PM
 */

#include "cLanchonete.h"
#include <iostream>

using namespace std;

cLanchonete::cLanchonete() {
}

cLanchonete::cLanchonete(const cLanchonete& orig) {
}

cLanchonete::~cLanchonete() {
}

void cLanchonete::cardapio(){
    system("clear");
    cout <<endl << "-------------------------------------------------------"<<endl;
    cout << "|Código |Produto                   |Preço Unitário(R$)|"<<endl;
    cout << "|100    |Cachorro quente           | R$ 1,70          |"<<endl;
    cout << "|101    |Bauru Simples             | R$ 2,30          |"<<endl;
    cout << "|102    |Bauru com ovo             | R$ 2,60          |"<<endl;
    cout << "|103    |Hamburguer                | R$ 2,40          |"<<endl;
    cout << "|104    |Cheeseburguer             | R$ 2,50          |"<<endl;
    cout << "|105    |Refrigerante              | R$ 1,00          |"<<endl;
    cout << "-------------------------------------------------------"<<endl;
    cout << "Digite -1 para terminar sua compra." <<endl <<endl;
    cout << "Insira a opção desejada: ";    
}

void cLanchonete::insert(){
    int opc=0, qtd=0;
    float vt=0;
    while (opc != -1){
        this->cardapio();
        cin >> opc;
        switch(opc){
            case 100:
                qtd = quantidade();
                vt = vt + 1.7*qtd;
            break;
            case 101:
                qtd = quantidade();
                vt = vt + 2.3*qtd;
            break; 
            case 102:
                qtd = quantidade(); 
                vt = vt + 2.6*qtd;
            break; 
            case 103:
                qtd = quantidade();
                vt = vt + 2.4*qtd;
            break; 
            case 104:
                qtd = quantidade();
                vt = vt + 2.5*qtd;
            break; 
            case 105:
                qtd = quantidade();
                vt = vt + 1*qtd;
            break;
            case -1:
                this->mostrarConta(vt);
            break;
            default:
                cout << "Opção inválida."<<endl;
        }
    }
}

void cLanchonete::mostrarConta(float vt){
    system("clear");
    cout <<endl << "O valor total a pagar é de: " << vt;
}

int cLanchonete::quantidade(){
    int qtd;
    cout << "Insira a quantidade desejada: ";
    cin >> qtd;
    return qtd;
}