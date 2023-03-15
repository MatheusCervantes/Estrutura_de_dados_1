/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Pilha.cpp
 * Author: aluno
 * 
 * Created on 13 de outubro de 2022, 09:14
 */

#include "cPilhaEstatica.h"
#include <iostream>

using namespace std; 

Pilha::Pilha() {
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {
}

void Pilha::insere(int vet [], int n)
{
    for (int f=0; f<n; f++) {
            cout << "Digite qual número deseja inserir: ";
            cin >> vet[f];
            system("clear");
        }
    }

void Pilha::listar(int vet [], int n){
    cout <<endl;
    for (int f=n-1; f>=0; f--) {
            cout << vet[f] << "\t";
    }
    cout << endl;
}

void Pilha::menu(void){
	char op;
	int sair=0;
        int tamanho;
        cout << "Insira o tamanho da pilha: ";
        cin >> tamanho;
        int vet[tamanho];
	for (;sair==0;){
		cout<<endl << "1 -> Insere na pilha\n" <<
                      "2 -> Listar pilha\n" <<
                      "3 -> Sair da pilha\n";
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
