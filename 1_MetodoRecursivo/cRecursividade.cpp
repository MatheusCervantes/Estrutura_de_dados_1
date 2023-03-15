/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cRecursividade.cpp
 * Author: Matheus
 * 
 * Created on 14 de novembro de 2022, 14:17
 */

#include "cRecursividade.h"
#include <iostream>
#include <cstring>

using namespace std;

cRecursividade::cRecursividade() {
}

cRecursividade::cRecursividade(const cRecursividade& orig) {
}

cRecursividade::~cRecursividade() {
}

void cRecursividade::insert(){
    int opc;
    this->menu();
    cout << endl << endl << "Insira a opção desejada: ";
    cin >> opc;
    system("clear");
    if (opc==1) {
        cout << "Digite o número que desejada saber o fatorial: ";
        int n;
        cin >> n;
        cout << "O fatorial de " << n << " é: " << this->fatorial(n);
    }
    
    else if (opc==2) {
        int opctabuada;
        cout << "1- Calcular tabuada completa " << endl <<
                "2- Calcular apenas um múltiplicação da tabuada" << endl;
        cout << endl << "Escolha a opção desejada: ";
        cin >> opctabuada;
        system("clear");
        if (opctabuada == 1) {
        cout << "Digite o número que deseja efetuar a tabuada: ";
        double g;
        int f;
        cin >> g;
        cout << "Digite até qual valor deseja calcular a tabuada do " << g << ": ";
        cin >> f;
        system("clear");
        cout << "Tabuada do " << g << " até " << f <<endl;
        this->tabuada(g, f);
        }
        
        else if (opctabuada == 2) {
            double n1, n2;
            cout << "Digite o número 1: ";
            cin >> n1;
            cout << "Digite o número 2: ";
            cin >> n2;
            cout << "O valor da multiplicação de " << n1 << " X " << n2 << " é: " << this->tabuadaespecifica(n1, n2) ;
                    
        }
        else 
            cout << "Opção inválida";
    }
    
    else if (opc==3) {
        int limite;
        cout << "Estipule um limite para calcular a série de fibonacci: ";
        cin >> limite;
        for (int n=1; n<=limite; n++)
            cout <<this->fibonacci(n) << endl;
    }
    
    else if (opc==4) {
        this->menuPilha();
    }
    
    else
        cout << "Opção inválida";
            
}

int cRecursividade::fatorial (int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n * this->fatorial(n-1);
}

double cRecursividade::tabuada (double n, int f){
    if (n*f == n) {
        cout << n << " X " << f << " = " << n <<endl;
        return n;
    }
    else {
        double aux = n + this->tabuada(n, f-1);
        cout << n << " X " << f << " = " << aux << endl;
        return aux;
    }
}

double cRecursividade::tabuadaespecifica (double n, double f){
    if (n*f == n) 
        return n;
    else 
        return n + this->tabuadaespecifica(n, f-1);
    
}

int cRecursividade::fibonacci (int limite){
    if (limite == 1) 
        return 0;
    else {
        if (limite == 2)
            return 1;
        else
            return fibonacci(limite-1) + fibonacci(limite-2);
    }
        
}

void cRecursividade::inserirPilha(){
    int x;
    cout << "Insira um número: ";
    cin >> x;
    
    this->aux = (struct nodo *) malloc(sizeof(aux));
    this->aux->elem = x;
    this->aux->ant = this->topo;
    this->topo = this->aux;
}

void cRecursividade::removerPilha(){
    if (!vazio(this->topo)){
	   this->aux=this->topo;
	   this->topo=this->topo->ant;
	   free(this->aux);
	   cout<<"\nRemovido com sucesso!";
    }     
}

void cRecursividade::imprimirPilha(){
    nodo *p;
    p = this->topo;
    while (!vazio(p->ant)){
        cout << endl << p->elem;
        p = p->ant;
    }
    cout<< endl <<p->elem<<endl <<endl;

}

void cRecursividade::menu(){
    cout << "1- Para calcular fatorial. " << endl <<
            "2- Para calcular a tabuada. " << endl <<
            "3- Para mostrar a série de fibonacci. " << endl <<
            "4- Para criar uma pilha.";
}

void cRecursividade::menuPilha() {
    int ki;
    while (ki!=4) {
        cout << "1- Inserir " << endl <<
            "2- Remover " << endl <<
            "3- Imprimir " << endl <<
            "4- Sair " << endl << endl <<
            "Escolha a opção desejada: ";
        cin >> ki;
        system("clear");
        if (ki == 1)
            this->inserirPilha();
        else if (ki == 2)
            this->removerPilha();
        else if (ki == 3)
            this->imprimirPilha();
        else if (ki == 4)
            cout << "";
        else    
            cout << "Opção inválida" << endl;
    }
}

bool cRecursividade::vazio (struct nodo *campo) {
    if (campo == NULL ) 
	return true;
    else
        return false;
}