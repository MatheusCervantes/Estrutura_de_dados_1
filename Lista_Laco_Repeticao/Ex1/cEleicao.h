/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEleicao.h
 * Author: matheus
 *
 * Created on September 8, 2022, 5:32 PM
 */

#ifndef CELEICAO_H
#define CELEICAO_H

class cEleicao {
public:
    cEleicao();
    cEleicao(const cEleicao& orig);
    virtual ~cEleicao();
    void candidatos();
    void computar();
    void imprimirresultado(float, float, float, float, float, float, float);
private:

};

#endif /* CELEICAO_H */

