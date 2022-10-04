/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cEleicao.cpp
 * Author: matheus
 * 
 * Created on September 8, 2022, 5:32 PM
 */

#include "cEleicao.h"
#include <iostream>
#include <iomanip>

using namespace std;

cEleicao::cEleicao() {
}

cEleicao::cEleicao(const cEleicao& orig) {
}

cEleicao::~cEleicao() {
}

void cEleicao::candidatos(){
    cout << endl << "Para votar no candidato 1 digite o número 1." << endl;
    cout << "Para votar no candidato 2 digite o número 2." << endl;
    cout << "Para votar no candidato 3 digite o número 3." << endl;
    cout << "Para votar no candidato 4 digite o número 4." << endl;
    cout << "Para votar em nulo digite o número 5." << endl;
    cout << "Para votar em branco digite o número 6."<< endl;
    cout << "Digite -1 para sair e mostrar o resultado da eleição." << endl;
    cout << "Digite seu voto: ";
}

void cEleicao::computar(){
    int voto;
    float c1=0, c2=0, c3=0, c4=0, n=0, b=0, tv=0;
    while (voto!=-1) {
        this->candidatos();
        cin >> voto;
        if (voto == 1) {
            c1++;
            tv++;
        }
        else if (voto == 2) {
            c2++;
            tv++;
        }
        else if (voto == 3) {
            c3++;
            tv++;
        }
        else if (voto == 4) {
            c4++;
            tv++;
        }
        else if (voto == 5) {
            n++;
            tv++;
        }
        else if (voto == 6) {
            b++;
            tv++;
        }
        else if (voto == -1)
            cout << endl;
        else
            cout << "Opção inválida";
        system("clear");   
    }
    this->imprimirresultado(c1, c2, c3, c4, n, b, tv);
}

void cEleicao::imprimirresultado(float c1, float c2, float c3, float c4, float n, float b, float tv){
    cout << "O total de votos foi de: " << tv << endl << endl;
    
    if (c1>c2 && c1>c3 && c1>c4)
        cout << "O candidato 1 foi o vencedor com: " << c1 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c1/tv)*100 << "%" << endl << endl;
    else if (c2>c1 && c2>c3 && c2>c4)
        cout << "O candidato 2 foi o vencedor com: " << c2 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c2/tv)*100 << "%" << endl << endl;
    else if (c3>c1 && c3>c2 && c3>c4)
        cout << "O candidato 3 foi o vencedor com: " << c3 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c3/tv)*100 << "%" << endl << endl;
    else 
        cout << "O candidato 4 foi o vencedor com: " << c4 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c4/tv)*100 << "%" << endl << endl;
    
    cout << "A distribuição dos votos foram: " << endl;
    cout << "Candidato 1: " << c1 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c1/tv)*100 << "%" << endl;
    cout << "Candidato 2: " << c2 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c2/tv)*100 << "%" << endl;
    cout << "Candidato 3: " << c3 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c3/tv)*100 << "%" << endl;
    cout << "Candidato 4: " << c4 << " votos e o seu percentual de votos foi de: " << setprecision(2) << (c4/tv)*100 << "%" << endl;
    cout << "Votos nulos: " << n << " votos e o seu percentual de votos foi de: " << setprecision(2) << (n/tv)*100 << "%" << endl;
    cout << "Votos em branco: " << b << " votos e o seu percentual de votos foi de: " << setprecision(2) << (b/tv)*100 << "%" << endl;
}
