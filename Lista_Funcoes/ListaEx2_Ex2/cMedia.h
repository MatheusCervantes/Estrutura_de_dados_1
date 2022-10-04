/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMedia.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 08:31
 */

#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    double nota1, nota2, nota3;
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
    void insert();
    double artimetica();
    double ponderada();
    void atribuir();
private:

};

#endif /* CMEDIA_H */

