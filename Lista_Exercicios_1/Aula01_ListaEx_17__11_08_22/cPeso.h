/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPeso.h
 * Author: matheus
 *
 * Created on 12 de agosto de 2022, 23:42
 */

#ifndef CPESO_H
#define CPESO_H

class cPeso {
public:
    cPeso();
    cPeso(const cPeso& orig);
    virtual ~cPeso();
    void insert();
    double peso(double h, int op);
private:

};

#endif /* CPESO_H */

