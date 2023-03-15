/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cRecursividade.h
 * Author: Matheus
 *
 * Created on 14 de novembro de 2022, 14:17
 */

#ifndef CRECURSIVIDADE_H
#define CRECURSIVIDADE_H
#include <cstring>

using namespace std;

struct nodo{
	int elem;
	struct nodo *ant;
};

class cRecursividade {
public:
    cRecursividade();
    cRecursividade(const cRecursividade& orig);
    virtual ~cRecursividade();
    nodo *topo, *aux;
    void insert();
    int fatorial (int n);
    double tabuada (double n, int f);
    double tabuadaespecifica (double n, double f);
    int fibonacci (int limite);
    void inserirPilha();
    void removerPilha();
    void imprimirPilha();
    void menu();
    void menuPilha();
    bool vazio (struct nodo *campo);
private:

};

#endif /* CRECURSIVIDADE_H */

