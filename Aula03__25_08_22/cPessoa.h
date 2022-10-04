/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPessoa.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 10:34
 */

#ifndef CPESSOA_H
#define CPESSOA_H
#include <string>

using namespace std;

struct pessoa{
    string nome, end;
    long int tell, tel2;
};

class cPessoa {
public:
    pessoa VetPessoas[10];
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    void cadPessoa();
    void impDadosPessoa();
private:

};

#endif /* CPESSOA_H */

