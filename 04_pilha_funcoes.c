/*
 * Exercício 04 - Funções da Pilha
 *
 * Implemente aqui as funções da pilha usadas em 04_pilha.c.
 */

#define MAX 10

int pilha[MAX];
int topo = -1;

int estaVazia() {

    // Verifica se a pilha está vazia
    if (topo == -1) {
        return 1;
    }

    return 0;
}

int estaCheia() {

    // Verifica se o topo atingiu a última posição do vetor
    if (topo == MAX - 1) {
        return 1;
    }

    return 0;
}

void empilhar(int valor) {

    // Verifica se existe espaço disponível
    if (!estaCheia()) {

        // Avança para a próxima posição
        topo++;

        // Armazena o valor no topo da pilha
        pilha[topo] = valor;
    }
}

int desempilhar() {

    // Verifica se a pilha está vazia
    if (estaVazia()) {
        return -1;
    }

    // Armazena o valor que será removido
    int valor = pilha[topo];

    // Retorna para a posição anterior
    topo--;

    return valor;
}

int verTopo() {

    // Verifica se existem elementos na pilha
    if (estaVazia()) {
        return -1;
    }

    // Retorna o valor do topo sem removê-lo
    return pilha[topo];
}