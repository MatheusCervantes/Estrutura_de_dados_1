/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCadastro.h
 * Author: matheus
 *
 * Created on September 9, 2022, 3:59 PM
 */

#ifndef CCADASTRO_H
#define CCADASTRO_H
#include <string>

using namespace std;

struct cpessoa {
    string nome;
    long int cpf;
};

class cCadastro {
public:
    cCadastro();
    cCadastro(const cCadastro& orig);
    virtual ~cCadastro();
    void insert ();
    void imprimir (cpessoa Pessoa[], int n);
    int buscarCPF_sequencial (cpessoa Pessoa[], long int cpf, int n);
    int buscarCPF_binario (cpessoa Pessoa[], long int cpf, int n);
    void bolha (cpessoa Pessoa[], int n);
    void buscarpessoa(cpessoa Pessoa[], int n);
private:

};

#endif /* CCADASTRO_H */

