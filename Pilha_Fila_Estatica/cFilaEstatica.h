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

class cFila {
public:
    
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila();
    
    bool vazio(struct nodo *campo);
    void insere(int [], int n);
    void removr(int [], int n);
    void listar(int [], int n);
    void menu();

private:

};

#endif /* CFILA_H */

