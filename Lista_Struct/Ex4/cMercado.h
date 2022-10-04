/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMercado.h
 * Author: matheus
 *
 * Created on September 9, 2022, 5:15 PM
 */

#ifndef CMERCADO_H
#define CMERCADO_H
#include <string>;

using namespace std;

struct produto {
    int codigo;
    string nome;
    float preco;
};

class cMercado {
public:
    cMercado();
    cMercado(const cMercado& orig);
    virtual ~cMercado();
    void insert();
    int PesquisaSequencial(produto Produto[], int cod, int n);
    void PesquisarCodigo(produto Produto[], int n);
    void imprimir(produto Produto[], int n);
private:

};

#endif /* CMERCADO_H */

