/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cAltura.h
 * Author: matheus
 *
 * Created on September 8, 2022, 8:36 PM
 */

#ifndef CALTURA_H
#define CALTURA_H

class cAltura {
public:
    cAltura();
    cAltura(const cAltura& orig);
    virtual ~cAltura();
    void insert();
    float compararAmr(float, float);
    float compararAmn(float, float);
    void mostrar(float, float);
private:

};

#endif /* CALTURA_H */

