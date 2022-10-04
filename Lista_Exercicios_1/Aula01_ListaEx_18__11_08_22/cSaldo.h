/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cSaldo.h
 * Author: matheus
 *
 * Created on 12 de agosto de 2022, 23:58
 */

#ifndef CSALDO_H
#define CSALDO_H

class cSaldo {
public:
    cSaldo();
    cSaldo(const cSaldo& orig);
    virtual ~cSaldo();
    void insert();
    double credito(double s);
private:

};

#endif /* CSALDO_H */

