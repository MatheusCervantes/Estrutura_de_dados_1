/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFila.h
 * Author: aluno
 *
 * Created on 27 de outubro de 2022, 10:21
 */

#ifndef CFILA_H
#define CFILA_H

struct nodo{
    int elem;
    nodo *prox;
};

class cFila {
public:
    
    nodo *inicio, *fim, *aux;
    
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila();
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void removr(void);
    void listar(void);
    void menu(void);

private:

};

#endif /* CFILA_H */

