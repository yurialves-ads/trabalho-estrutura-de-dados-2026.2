/*
 * Exercício 01 - Pesquisa Sequencial
 *
 * Dado o vetor de 10 números abaixo, use a pesquisa sequencial para
 * encontrar o ÚLTIMO número par e mostre a posição em que ele está.
 *
 *     { 3, 8, 5, 12, 7, 9, 4, 11, 15, 21 }
 *
 * - Não altere os valores do vetor.
 * - A posição começa em 0.
 *
 * Saída esperada:
 *     O ultimo numero par esta na posicao X
 */

#include <stdio.h>

#define TAMANHO 10

int buscarUltimoPar(int vetor[], int tamanho) {

    // Inicializa a posição como não encontrada
    int posicao = -1;

    // Percorre todos os elementos do vetor
    for (int i = 0; i < tamanho; i++) {

        // Verifica se o número é par
        if (vetor[i] % 2 == 0) {

            // Atualiza a posição do último número par encontrado
            posicao = i;
        }
    }

    return posicao;
}

int main() {
    int numeros[TAMANHO] = { 3, 8, 5, 12, 7, 9, 4, 11, 15, 21 };

    // Realiza a pesquisa sequencial
    int posicao = buscarUltimoPar(numeros, TAMANHO);

    // Exibe a posição encontrada
    printf("O ultimo numero par esta na posicao %d\n", posicao);

    return 0;
}