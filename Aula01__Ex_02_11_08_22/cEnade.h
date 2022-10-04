/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEnade.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 09:14
 */

#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    int vetA[10], vetB[10];
    
    cEnade();
    cEnade(const cEnade& orig);
    virtual ~cEnade();
    
    void insert();
    void print();
    
private:

};

#endif /* CENADE_H */

