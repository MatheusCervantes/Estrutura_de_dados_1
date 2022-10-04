/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPessoa.h
 * Author: matheus
 *
 * Created on September 9, 2022, 12:28 AM
 */

#ifndef CPESSOA_H
#define CPESSOA_H
#include <string>

using namespace std;

struct pessoa {
    string nome, sexo;
    float altura, peso;
    long int cpf;
};

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    void npessoas();
    void imprimir (pessoa Pessoas[], int p);
    void Bolha (pessoa Pessoas[], int n);
    int BuscarCPF (pessoa Pessoas[], int chave, int n); 
private:

};

#endif /* CPESSOA_H */

