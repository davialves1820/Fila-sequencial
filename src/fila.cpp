#include "fila.h" 

// Cria a fila
fila::fila() : tam(0), head(0), end(-1) {
    cout << "Fila criada" << endl;
}

// Verifica se a fila está vazia
bool fila::empty() {
    return tam == 0;
}

// Verifica se a fila está cheia
bool fila::full() {
    return tam == TAM_MAX;
}

// Retorna o tamanho
int fila::get_tam() {
    return tam;
}

// Insere no fim
void fila::insert(int v) {
    if (full()) {
        cout << "Fila cheia" << endl;
        return;
    }
    
    end = (end + 1) % TAM_MAX;
    vetor[end] = v;
    tam++;
}

// Remove a cabeça
void fila::remove() {
    if (empty()) {
        cout << "Fila vazia" << endl;
    }

    head = (head + 1) % TAM_MAX;
    tam--;

}

// Retorna a cabeça
int fila::get_head() {
    return vetor[head];
}

void fila::print() {
    int aux = head;

    cout << "Fila: ";
    // Percorre o vetor de maneira circular
    while (aux != end) {
        cout << vetor[aux] << " ";
        aux = (aux + 1) % TAM_MAX;
    }
    cout << vetor[aux];
    cout << endl;
}