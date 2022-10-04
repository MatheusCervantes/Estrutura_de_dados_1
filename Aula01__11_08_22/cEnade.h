/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEnade.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 08:40
 */

#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    
    int M[3][4];
    
    cEnade();
    cEnade(const cEnade& orig);
    virtual ~cEnade();
    
    void insert();
    void print();
private:

};

#endif /* CENADE_H */

