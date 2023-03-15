/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cDuplamenteEncadeada.h
 * Author: matheus
 *
 * Created on November 22, 2022, 6:54 PM
 */

#ifndef CDUPLAMENTEENCADEADA_H
#define CDUPLAMENTEENCADEADA_H

struct DuplamenteEncadeada{
        int elem;
        struct DuplamenteEncadeada *ant, *prox;
};

class cDuplamenteEncadeada {
public:
    cDuplamenteEncadeada();
    cDuplamenteEncadeada(const cDuplamenteEncadeada& orig);
    virtual ~cDuplamenteEncadeada();
    DuplamenteEncadeada *inicio, *fim, *aux, *meio;
    void calcMeio();
    void inserirFim(int valor);
    void inserirMeio(int valor);
    void inserirInicio(int valor);
    void listarInicio();
    void listarMeio();
    void listarFim();
    void removerInicio();
    void removerFim();
    void removerMeio();
    void menu();
    bool pesquisar(int valor);
    void inserirValor(int *valor);
    bool vazio();
    void maiormenor();
private:

};

#endif /* CDUPLAMENTEENCADEADA_H */

