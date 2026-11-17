/*
 * Exercício 02 - Ordenação e Pesquisa Binária
 *
 * Dado o vetor de 10 números abaixo:
 *
 *     { 42, 7, 19, 3, 88, 25, 61, 14, 50, 33 }
 *
 * 1. Ordene o vetor em ordem crescente e mostre o vetor ordenado.
 * 2. Peça um número ao usuário e use a pesquisa binária para encontrá-lo
 *    no vetor ordenado.
 * 3. Mostre a posição do número ou "Numero nao encontrado".
 *
 * - A posição começa em 0.
 */

#include <stdio.h>

#define TAMANHO 10

void ordenar(int vetor[], int tamanho) {

    // Controla as passagens pelo vetor
    for (int i = 0; i < tamanho - 1; i++) {

        // Percorre os elementos que ainda precisam ser ordenados
        for (int j = 0; j < tamanho - i - 1; j++) {

            // Verifica se os elementos estão fora de ordem
            if (vetor[j] > vetor[j + 1]) {

                // Guarda temporariamente o valor atual
                int auxiliar = vetor[j];

                // Realiza a troca dos valores
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

int pesquisaBinaria(int vetor[], int tamanho, int valor) {

    // Define os limites iniciais da pesquisa
    int inicio = 0;
    int fim = tamanho - 1;

    // Variável que armazenará a posição central
    int meio;

    /* TODO: implementar a lógica da pesquisa binária */

    return -1;
}

int main() {
    int numeros[TAMANHO] = { 42, 7, 19, 3, 88, 25, 61, 14, 50, 33 };
    int valor;

    ordenar(numeros, TAMANHO);

    // Exibe os elementos do vetor após a ordenação
    printf("Vetor ordenado: ");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &valor);

    int posicao = pesquisaBinaria(numeros, TAMANHO, valor);

    /* TODO: mostrar a posição ou "Numero nao encontrado" */

    return 0;
}