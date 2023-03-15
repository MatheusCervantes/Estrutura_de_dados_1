/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Pilha.h
 * Author: aluno
 *
 * Created on 13 de outubro de 2022, 09:14
 */

#ifndef PILHA_H
#define PILHA_H

class Pilha {
public:
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
 
    bool vazio(struct nodo *campo);
    void insere(int [], int n);
    void removr(int [], int n);
    void listar(int [], int n);
    void menu();
private:

};

#endif /* PILHA_H */

