/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPessoa.cpp
 * Author: matheus
 * 
 * Created on September 9, 2022, 12:28 AM
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

void cPessoa::npessoas(){
    int n, indcpf;
    long int cpf;
    cout << "Insira quantas pessoas quer cadastrar: ";
    cin >> n;
    pessoa Pessoas[n+1];
    for (int f=0; f<n; f++) {
        system("clear");
        cout << endl << "Insira o nome da pessoa " << f+1 << ": ";
        cin >> Pessoas[f].nome;
        cout << "Insira a altura da pessoa " << f+1 << ": ";
        cin >> Pessoas[f].altura;
        cout << "Insira o peso da pessoa " << f+1 << ": ";
        cin >> Pessoas[f].peso;
        cout << "Insira o sexo da pessoa " << f+1 << ": ";
        cin >> Pessoas[f].sexo;
        cout << "Insira o CPF da pessoa " << f+1 << ": ";
        cin >> Pessoas[f].cpf;    
    }
    cout <<endl <<endl << "Qual das pessoas deseja descobrir o IMC?" << endl;
    cout << "Digite o CPF que deseja saber o IMC: ";
    cin >> cpf;
    this->Bolha(Pessoas, n);
    indcpf = this->BuscarCPF(Pessoas, cpf, n);
    if (indcpf==-1)
        cout << "CPF inválido.";
    else
        this->imprimir(Pessoas, indcpf);    
}

void cPessoa::imprimir (pessoa Pessoas[], int p) {
    cout <<endl << "O dados da pessoa cujo o cpf foi inserido são: " <<endl;
    cout << "Nome: " << Pessoas[p].nome <<endl;
    cout << "Altura: " << Pessoas[p].altura <<endl;
    cout << "Peso: " << Pessoas[p].peso <<endl;
    cout << "Sexo: " << Pessoas[p].sexo <<endl;
    cout << "CPF: " << Pessoas[p].cpf <<endl;
    cout << "O IMC desta pessoa é: " << Pessoas[p].peso/(Pessoas[p].altura*Pessoas[p].altura) <<endl;
}

void cPessoa::Bolha (pessoa Pessoas[], int n) {
    int i, j;
    pessoa temp;
    bool troca;
    troca = true;
    for (i= n-1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j= 0; j < i ;j++) {
            if (Pessoas[j].cpf > Pessoas[j+1].cpf) {
                temp = Pessoas[j];
                Pessoas[j] = Pessoas[j+1];
                Pessoas[j+1] = temp;
                troca = true;
            }
        }
    }
}

int cPessoa::BuscarCPF (pessoa Pessoas[], int chave , int n){
    int inf,sup,meio;
    inf=0;
    sup=n-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (chave==Pessoas[meio].cpf)
            return meio;
        else if (chave<Pessoas[meio].cpf)
            sup=meio-1;
        else
            inf=meio+1;
    }
return -1; /* não encontrado */
}