/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCompra.cpp
 * Author: matheus
 * 
 * Created on 13 de agosto de 2022, 00:40
 */

#include "cCompra.h"
#include <iostream>

using namespace std;

cCompra::cCompra() {
}

cCompra::cCompra(const cCompra& orig) {
}

cCompra::~cCompra() {
}

void cCompra::insert(){
    int op, q;
    double total=0;
    while (op !=0) { 
        cout << "------------------------" << endl;
        cout << "|Código do|   Preço    |" << endl;
        cout << "| Produto |  unitário  |" << endl;
        cout << "|---------|------------|" << endl;
        cout << "|1001     |5,32        |" << endl;
        cout << "|1324     |6,45        |" << endl;
        cout << "|6548     |2,37        |" << endl;
        cout << "| 987     |5,32        |" << endl;
        cout << "|7623     |6,45        |" << endl;
        cout << "------------------------" << endl;
        cout << "Digite 0 finalizar compra." << endl << endl; 
        cout << "Insira a opção desejada: ";
        cin >> op;
        if (op == 1001) {
            cout << "Insira a quantidade desejada: ";
            cin >> q;
        }    
        else if (op == 1324) {
            cout << "Insira a quantidade desejada: ";
            cin >> q;
        }
        else if (op == 6548) {
            cout << "Insira a quantidade desejada: ";
            cin >> q;
        }
        else if (op == 987) {
            cout << "Insira a quantidade desejada: ";
            cin >> q;
        }
        else if (op == 7623) {
            cout << "Insira a quantidade desejada: ";
            cin >> q;
        }
        else if (op == 0);
        else
            cout << "Opção inválida." << endl;
        total = total + this->calculo(q, op);
    }
    cout << endl << endl << "O valor total a ser pago é: " << total;
    if (op == 0)
            exit(0);
}
    
double cCompra::calculo (int q, int cd){
    double t = 0;
    if (cd == 1001){
        t = t + 5.32*q;           
    }
    else if (cd == 1324){
        t = t + 6.45*q;  
    }
    else if (cd == 6548){
        t = t + 2.37*q;  
    }
    else if (cd ==  987){
        t = t + 5.32*q;  
    }
    else if (cd == 7623){
        t = t + 6.45*q;  
    }
    return t;
}
