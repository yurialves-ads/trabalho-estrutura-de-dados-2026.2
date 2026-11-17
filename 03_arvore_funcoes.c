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

    // Cria um novo nó ao encontrar uma posição vazia
    if (raiz == NULL) {
        return criarNo(valor);
    }

    // Insere valores menores no lado esquerdo
    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    }

    // Insere valores maiores no lado direito
    else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    }

    // Retorna a raiz da árvore
    return raiz;
}

void preOrdem(No *raiz) {

    // Verifica se o nó existe
    if (raiz != NULL) {

        // Exibe o valor do nó atual
        printf("%d ", raiz->valor);

        // Percorre o lado esquerdo
        preOrdem(raiz->esquerda);

        // Percorre o lado direito
        preOrdem(raiz->direita);
    }
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