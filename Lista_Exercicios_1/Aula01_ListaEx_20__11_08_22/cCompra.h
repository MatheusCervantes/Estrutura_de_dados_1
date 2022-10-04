/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCompra.h
 * Author: matheus
 *
 * Created on 13 de agosto de 2022, 00:40
 */

#ifndef CCOMPRA_H
#define CCOMPRA_H

class cCompra {
public:
    cCompra();
    cCompra(const cCompra& orig);
    virtual ~cCompra();
    void insert();
    double calculo (int q, int cd);
private:

};

#endif /* CCOMPRA_H */

