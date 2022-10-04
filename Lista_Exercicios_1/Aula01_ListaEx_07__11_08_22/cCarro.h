/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCarro.h
 * Author: matheus
 *
 * Created on 12 de agosto de 2022, 20:27
 */

#ifndef CCARRO_H
#define CCARRO_H

class cCarro {
public:
    cCarro();
    cCarro(const cCarro& orig);
    virtual ~cCarro();
    
    void insert();
    double calculo(double c);
private:

};

#endif /* CCARRO_H */

