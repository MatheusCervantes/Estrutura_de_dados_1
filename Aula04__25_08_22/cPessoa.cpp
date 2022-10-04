/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPessoa.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 10:34
 */

#include "cPessoa.h"
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::cadPessoa(){
    int n = 10;
    long int cpf;
    pessoa VetPessoas[n];
    for(int i=0; i<n; i++){
        cout << "Digite nome: ";
        cin >> VetPessoas[i].nome;
        cout << "Digite o endereço: ";
        cin >> VetPessoas[i].end;
        cout << "Digite o telefone 1: ";
        cin >> VetPessoas[i].tell;
        cout << "Digite o CPF: ";
        cin >> VetPessoas[i].cpf;
        cout << endl;
    }
    
    //this->Bolha(VetPessoas, n);
    this->Bolha2(VetPessoas, n);
    this->impDadosPessoa(VetPessoas, n);
    
    cout << endl << "Insira o CPF que deseja procurar: ";
    cin >> cpf;
    if (this->PesquisaBinaria(VetPessoas, cpf, 5) == -1)
        cout << endl << "CPF não encontrado.";
    else
        cout << endl << "CPF encontrado.";
}

void cPessoa::impDadosPessoa(pessoa VetPessoas[], int n){
    for(int i=0; i<n; i++){
        cout << endl << VetPessoas[i].nome << endl;
        cout << VetPessoas[i].end << endl;
        cout << VetPessoas[i].tell << endl;
        cout << VetPessoas[i].cpf << endl;
    }
}

/*struct pessoa cPessoa::buscarTelefone() {
    for(int i=0; i<=1; i++){
        if (this->VetPessoas[i].tell==123)
            return this->VetPessoas[i];
    }
}
*/

void cPessoa::Bolha (pessoa VetPessoas[], int n){
    int i, j, z=0;
    pessoa temp;
    for (i= n-1; i >= 1; i--) {
        for (j= 0; j < i ;j++) {
            if (VetPessoas[j].cpf > VetPessoas[j+1].cpf) {
                temp = VetPessoas[j];
                VetPessoas[j] = VetPessoas[j+1];
                VetPessoas[j+1] = temp;
            }
            z++;
        }
    }
    cout << endl << "Repetições: " << z << endl;
}

void cPessoa::Bolha2 (pessoa VetPessoas[], int n){
    int i, j, z=0;
    pessoa temp;
    bool troca;
    troca = true;
    for (i= n-1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j= 0; j < i ;j++){
            if (VetPessoas[j].cpf > VetPessoas[j+1].cpf) {
                temp = VetPessoas[j];
                VetPessoas[j] = VetPessoas[j+1];
                VetPessoas[j+1] = temp;
                troca = true;
            }
            z++;
        }
    }
    cout << endl << "Repetições: " << z << endl;
}

int cPessoa::PesquisaBinaria ( pessoa VetPessoas[], int chave , int N){
    int inf,sup,meio;
    inf=0;
    sup=N-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (chave == VetPessoas[meio].cpf)
            return meio;
        else if (chave < VetPessoas[meio].cpf)
            sup=meio-1;
        else
            inf=meio+1;
    }
 return -1; // não encontrado 
}
    
