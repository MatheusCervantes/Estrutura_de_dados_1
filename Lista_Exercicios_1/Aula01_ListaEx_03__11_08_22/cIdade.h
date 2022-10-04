/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIdade.h
 * Author: matheus
 *
 * Created on 11 de agosto de 2022, 21:07
 */

#ifndef CIDADE_H
#define CIDADE_H
#include <iostream>

class cIdade {
public:
    
    
    cIdade();
    cIdade(const cIdade& orig);
    virtual ~cIdade();
    
    void insert();
    int calculo(int a, int b, int c);
private:

};

#endif /* CIDADE_H */

