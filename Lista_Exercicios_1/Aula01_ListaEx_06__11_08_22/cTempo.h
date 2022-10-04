/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cTempo.h
 * Author: matheus
 *
 * Created on 12 de agosto de 2022, 17:14
 */

#ifndef CTEMPO_H
#define CTEMPO_H

class cTempo {
public:
    cTempo();
    cTempo(const cTempo& orig);
    virtual ~cTempo();
    void insert();
    float horas (int a);
    float minutos (int a);
    float segundos (int a);
private:

};

#endif /* CTEMPO_H */

