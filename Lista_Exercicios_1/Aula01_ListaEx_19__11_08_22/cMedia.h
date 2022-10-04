/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMedia.h
 * Author: matheus
 *
 * Created on 13 de agosto de 2022, 00:13
 */

#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
    void insert();
    double aritmetica (double n1, double n2, double n3);
    double ponderada (double n1, double n2, double n3);
    double harmonica (double n1, double n2, double n3);
private:

};

#endif /* CMEDIA_H */

