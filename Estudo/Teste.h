/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Teste.h
 * Author: matheus
 *
 * Created on November 22, 2022, 3:04 PM
 */

#ifndef TESTE_H
#define TESTE_H

class Teste {
public:
    Teste();
    Teste(const Teste& orig);
    virtual ~Teste();
    void insert ();
    void referencia(int *x, int *y);
    void Valor(int x, int y);
private:

};

#endif /* TESTE_H */

