/*
 * Exercício 03 - Funções da Árvore Binária de Busca
 *
 * Implemente aqui as funções da árvore usadas em 03_arvore_binaria.c.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

No* criarNo(int valor) {

    // Reserva memória para um novo nó
    No *novo = malloc(sizeof(No));

    // Verifica se a memória foi alocada corretamente
    if (novo == NULL) {
        return NULL;
    }

    // Armazena o valor recebido
    novo->valor = valor;

    // Inicializa os ponteiros do novo nó
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

No* inserir(No *raiz, int valor) {
    /* TODO: inserir o valor na árvore */
    return raiz;
}

void preOrdem(No *raiz) {
    /* TODO: implementar o percurso pré-ordem */
}

void emOrdem(No *raiz) {
    /* TODO: implementar o percurso em ordem */
}

void posOrdem(No *raiz) {
    /* TODO: implementar o percurso pós-ordem */
}

void emNivel(No *raiz) {
    /* TODO: implementar o percurso em nível */
}