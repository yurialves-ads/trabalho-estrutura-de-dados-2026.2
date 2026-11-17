/*
 * Exercício 05 - Funções da Fila
 *
 * Implemente aqui as funções da fila usadas em 05_fila.c.
 */

#define MAX 10

int fila[MAX];
int inicio = 0;
int fim = 0;

int estaVazia() {

    // Verifica se a fila está vazia
    if (inicio == fim) {
        return 1;
    }

    return 0;
}

int estaCheia() {

    // Verifica se o fim atingiu o limite do vetor
    if (fim == MAX) {
        return 1;
    }

    return 0;
}

void enfileirar(int valor) {

    // Verifica se existe espaço disponível
    if (!estaCheia()) {

        // Armazena o valor no final da fila
        fila[fim] = valor;

        // Avança para a próxima posição livre
        fim++;
    }
}

int desenfileirar() {

    // Verifica se a fila está vazia
    if (estaVazia()) {
        return -1;
    }

    // Armazena o valor que será removido
    int valor = fila[inicio];

    // Avança para o próximo elemento
    inicio++;

    // Retorna o valor removido
    return valor;
}

int verInicio() {

    // Verifica se existem elementos na fila
    if (estaVazia()) {
        return -1;
    }

    // Retorna o primeiro elemento sem removê-lo
    return fila[inicio];
}