/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cNotas.h
 * Author: matheus
 *
 * Created on September 8, 2022, 11:43 PM
 */

#ifndef CNOTAS_H
#define CNOTAS_H
#include <string>

using namespace std;

struct aluno {
    string nome;
    double n1, n2;
    int matricula;
};

class cNotas {
public:
    cNotas();
    cNotas(const cNotas& orig);
    virtual ~cNotas();
    void insert ();
    void imprimir(aluno Pessoas[], int n);
private:

};

#endif /* CNOTAS_H */

