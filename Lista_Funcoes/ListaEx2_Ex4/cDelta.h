/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cDelta.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 09:29
 */

#ifndef CDELTA_H
#define CDELTA_H

class cDelta {
public:
    cDelta();
    cDelta(const cDelta& orig);
    virtual ~cDelta();
    void insert();
    double delta(double a, double b, double c);
private:

};

#endif /* CDELTA_H */

