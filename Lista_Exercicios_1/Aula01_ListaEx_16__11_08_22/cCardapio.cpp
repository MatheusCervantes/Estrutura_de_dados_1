/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCardapio.cpp
 * Author: matheus
 * 
 * Created on 12 de agosto de 2022, 22:58
 */

#include "cCardapio.h"
#include <iostream>

using namespace std;

cCardapio::cCardapio() {
}

cCardapio::cCardapio(const cCardapio& orig) {
}

cCardapio::~cCardapio() {
}

void cCardapio::insert() {
    int n, q; 
    float total;
    while (n != -1) {
        n = 0;
        q = 0;
        cout << endl;
        cout << "-----------------------------------" << endl;
        cout << "|Especificação   | Código | Preço |" << endl;
        cout << "|Cachorro quente |  100   | 1,20  |" << endl;
        cout << "|Bauru simples   |  101   | 1,30  |" << endl;
        cout << "|Bauru com ovo   |  102   | 1,50  |" << endl;
        cout << "|Hambúguer       |  103   | 1,20  |" << endl;
        cout << "|Cheeseburguer   |  104   | 1,30  |" << endl;
        cout << "|Refrigerante    |  105   | 1,00  |" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Digite -1 para sair." << endl << endl;
        cout << "Insira a opção desejada: ";
        cin >> n;
        if (n != -1) {
            cout << "Insira a quantidade desejada: ";
            cin >> q;
            }
        if (n == 100) 
            total = total + 1.20*q;
        else if (n == 101)
            total = total + 1.30*q;
        else if (n == 102)
            total = total + 1.50*q;
        else if (n == 103)
            total == total + 1.20*q;
        else if (n == 104)
            total == total + 1.30*q;
        else if (n == 105)
            total = total + 1*q;
        else if (n == -1);
        else
            cout << "Opção inválida.";
        cout << endl;
    }
    cout << "O valor total da compra foi de: " << total;
}