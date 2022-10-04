/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCalculo.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 10:24
 */

#ifndef CCALCULO_H
#define CCALCULO_H

class cCalculo {
public:
    float x1, x2 ,y1 ,y2;
    cCalculo();
    cCalculo(const cCalculo& orig);
    virtual ~cCalculo();
    
    void insert();
    void print();
private:

};

#endif /* CCALCULO_H */

