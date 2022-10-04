/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cVesfera.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 09:40
 */

#ifndef CVESFERA_H
#define CVESFERA_H

class cVesfera {
public:
    cVesfera();
    cVesfera(const cVesfera& orig);
    virtual ~cVesfera();
    void insert ();
    double calcularvolume (double r);
private:

};

#endif /* CVESFERA_H */

