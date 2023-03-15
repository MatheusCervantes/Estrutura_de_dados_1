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
    struct nodo{
	int elem;
	struct nodo *ant;//O próximo elemento a ser chamado tem que ser do tipo nodo, no caso *prox armazena recebe o endereco de proximo nodo
    } *topo, *aux;
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void removr(void);
    void listar(void);
    void menu(void);
private:

};

#endif /* PILHA_H */

