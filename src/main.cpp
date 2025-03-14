#include "fila.h"

int main(void) {

    // Insere e remove valores na fila e após cada remoção ou adição exibe ela
    fila f;
    cout << "Vazia? " << (f.empty() ? "Sim" : "Nao") << endl;
    f.insert(8);
    f.print();
    cout << "Vazia? " << (f.empty() ? "Sim" : "Nao") << endl;
    
    f.insert(3);
    f.print();
    f.insert(2);
    f.print();
    cout << "Tamanho: " << f.get_tam() << endl;
    
    f.insert(1);
    f.print();
    f.insert(6);
    f.print();
    cout << "Cheia? " << (f.full() ? "Sim" : "Nao") << endl;
    
    f.remove();
    f.print();
    f.insert(9);
    f.print();
    f.remove();
    f.print();
    f.insert(91);
    f.print();
    f.remove();
    f.print();
    f.insert(19);
    f.print();
    cout << "Elemento do top: " << f.get_head() << endl;


    return 0;
}