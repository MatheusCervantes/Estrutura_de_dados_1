/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCalculo.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 11:07
 */

#ifndef CCALCULO_H
#define CCALCULO_H

class cCalculo {
public:
    
    double a, b, c;
    cCalculo();
    cCalculo(const cCalculo& orig);
    virtual ~cCalculo();
    
    void insert();
    float calculo();
private:

};

#endif /* CCALCULO_H */

