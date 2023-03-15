/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFila.h
 * Author: matheus
 *
 * Created on November 22, 2022, 6:54 PM
 */

#ifndef CFILA_H
#define CFILA_H

struct Fila {
    int elemento;
    Fila *prox;
};

class cFila {
public:
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila();
    Fila *inicio, *fim, *aux;
    void removerFila();
    void inserirFila(int valor);
    void listarFila();
    void menu();
    bool pesquisa(int valor);
    bool vazio();
    void verificar(int valor);
private:

};

#endif /* CFILA_H */