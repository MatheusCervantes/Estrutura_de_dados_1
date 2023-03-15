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
#include "cFilaEstatica.h"

using namespace std;

cFila::cFila() {
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}

void cFila::insere(int vet [], int n)
{
    for (int f=0; f<n; f++) {
            cout << "Digite qual número deseja inserir: ";
            cin >> vet[f];
            system("clear");
        }
    }

void cFila::listar(int vet [], int n){
    cout <<endl;
    for (int f=0; f<n; f++) {
            cout << vet[f] << "\t";
    }
    cout << endl;
}

void cFila::menu(void){
	char op;
	int sair=0;
        int tamanho;
        cout << "Insira o tamanho da fila: ";
        cin >> tamanho;
        int vet[tamanho];
	for (;sair==0;){
		cout<<endl << "1 -> Insere na fila\n" <<
                      "2 -> Listar fila\n" <<
                      "3 -> Sair da fila\n";
		cout<<"\nDigite uma opção: ";
		cin>>op;
		switch (op)
		{
                    case '1': this->insere(vet, tamanho);
                    break;
                    case '2': this->listar(vet, tamanho); 
                    break;
                    case '3': sair=1;
                    break;
                    default: {
                        cout<<"Opção invalida! \n";
                    break;
                    }
		}
	}
}
