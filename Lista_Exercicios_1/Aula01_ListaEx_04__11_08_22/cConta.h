/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cConta.h
 * Author: matheus
 *
 * Created on 12 de agosto de 2022, 15:50
 */

#ifndef CCONTA_H
#define CCONTA_H
#include <cstring>

class cConta {
public:
    cConta();
    cConta(const cConta& orig);
    virtual ~cConta();
    void insert();
    int calculoanos(int a);
    int calculomeses(int a);
    int calculodias(int a);
private:

};

#endif /* CCONTA_H */

