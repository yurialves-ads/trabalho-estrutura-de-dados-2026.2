/*
 * Exercício 05 - Fila
 *
 * Implemente uma fila de números inteiros usando um vetor e faça,
 * nesta ordem:
 *
 * 1. Insira na fila os números: 10, 20, 30, 40, 50
 * 2. Remova 1 número da fila e mostre qual foi removido.
 * 3. Mostre o número que está no início da fila.
 *
 * Operações da fila:
 * - estaVazia:     retorna 1 se a fila estiver vazia, senão 0.
 * - estaCheia:     retorna 1 se a fila estiver cheia, senão 0.
 * - enfileirar:    insere um número no fim da fila (se não estiver cheia).
 * - desenfileirar: remove e retorna o número do início (se não estiver vazia).
 * - verInicio:     retorna o número do início sem removê-lo.
 *
 * - A variável inicio guarda a posição do primeiro elemento da fila.
 * - A variável fim guarda a próxima posição livre no fim da fila.
 * - A fila está vazia quando inicio for igual a fim.
 * - As funções da fila devem ser implementadas no arquivo 05_fila_funcoes.c.
 *
 * Para compilar:
 *     gcc 05_fila.c -o fila
 */

#include <stdio.h>
#include "05_fila_funcoes.c"

int main() {
    enfileirar(10);
    enfileirar(20);
    enfileirar(30);
    enfileirar(40);
    enfileirar(50);

    int removido = desenfileirar();
    printf("Numero removido: %d\n", removido);

    printf("Inicio da fila: %d\n", verInicio());

    return 0;
}