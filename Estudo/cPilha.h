/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPilha.h
 * Author: matheus
 *
 * Created on November 22, 2022, 6:54 PM
 */

#ifndef CPILHA_H
#define CPILHA_H

struct Pilha {
    int elemento;
    Pilha *ant;
};

class cPilha {
public:
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    Pilha *topo, *aux;
    void removerPilha();
    void inserirPilha(int valor);
    void listarPilha();
    void menu();
    bool pesquisa(int valor);
    bool vazio();
    Pilha imprimir_recursivo (Pilha *auxiliar); 
    void mostrarmeio();
private:

};

#endif /* CPILHA_H */

