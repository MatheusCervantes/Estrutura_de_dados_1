/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cTriangulo.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 10:07
 */

#ifndef CTRIANGULO_H
#define CTRIANGULO_H
#include <string>
#include <iostream>

using namespace std;

class cTriangulo {
public:
    char tipo;
    cTriangulo();
    cTriangulo(const cTriangulo& orig);
    virtual ~cTriangulo();
    void insert();
    string triangulo (double a, double b, double c);
private:

};

#endif /* CTRIANGULO_H */

