#ifndef FILA_H
#define FILA_H

#include <iostream>
#define TAM_MAX 5

using std::cout;
using std::endl;

class fila {
    int tam; // Guarda o tamanho atual
    int head; // Guarda a posição do primeiro elemento
    int end; // Guarda a posição do último elemento
    int vetor[TAM_MAX];
public:
    fila();

    bool empty();

    bool full();
    
    int get_tam();
    
    void insert(int v);
    
    void remove();
        
    int get_head();

    void print();

};

#endif