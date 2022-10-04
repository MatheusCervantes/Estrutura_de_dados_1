/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: matheus
 * 
 * Created on 13 de agosto de 2022, 00:13
 */

#include "cMedia.h"
#include <iostream>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}
void cMedia::insert() {
    double  n1, n2, n3, op;
    while (op !=0) {
        cout << "Este programa faz o cáculo de diferente tipos de médias." << endl << endl;
        cout << "1 - Média aritmética." << endl;
        cout << "2 - Média ponderada(3,3,4)." << endl;
        cout << "3 - Média Harmônica." << endl; 
        cout << "0 - Para sair. "<< endl << endl;
        cout << "Insira a opção desejada: ";
        cin >> op;
        cout << endl;
        if (op == 0)
            exit(0);
        if (op >= 1 && op <=3){
            cout << "Insira a primeira nota: ";
            cin >> n1;
            cout << "Insira a segunda nota: ";
            cin >> n2;
            cout << "Insira a terceira nota: ";
            cin >> n3;
        }
        cout << endl;
        if (op == 1)
            cout << endl << "A média é: " << this->aritmetica(n1, n2, n3) << endl << endl;
        else if (op == 2)
            cout << endl << "A média é: " << this->ponderada(n1, n2, n3) << endl << endl;
        else if (op == 3)
            cout << endl << "A média é: " << this->harmonica(n1, n2, n3) << endl << endl;
        else if (op < 0 || op > 3 )
            cout << "Opção inválida." << endl << endl;
    }
}

double cMedia::aritmetica (double n1, double n2, double n3) {
    return (n1+n2+n3)/3;
}

double cMedia::ponderada (double n1, double n2, double n3) {
    return (n1*3 + n2*3 + n3*4)/10;
}

double cMedia::harmonica (double n1, double n2, double n3) {
    return 3/(1/n1 + 1/n2 + 1/n3);
}
