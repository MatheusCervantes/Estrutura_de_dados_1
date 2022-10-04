/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cLanchonete.h
 * Author: matheus
 *
 * Created on September 8, 2022, 9:30 PM
 */

#ifndef CLANCHONETE_H
#define CLANCHONETE_H

class cLanchonete {
public:
    cLanchonete();
    cLanchonete(const cLanchonete& orig);
    virtual ~cLanchonete();
    void cardapio();
    void insert();
    void mostrarConta(float);
    int quantidade();
private:

};

#endif /* CLANCHONETE_H */

