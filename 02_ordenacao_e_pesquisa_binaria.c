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

    // Continua enquanto houver elementos para pesquisar
    while (inicio <= fim) {

        // Calcula a posição central
        meio = (inicio + fim) / 2;

        // Verifica se o valor foi encontrado
        if (vetor[meio] == valor) {
            return meio;
        }

        // Continua a pesquisa na metade direita
        if (vetor[meio] < valor) {
            inicio = meio + 1;
        }

        // Continua a pesquisa na metade esquerda
        else {
            fim = meio - 1;
        }
    }

    // Retorna -1 caso o valor não seja encontrado
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

    // Realiza a pesquisa no vetor ordenado
    int posicao = pesquisaBinaria(numeros, TAMANHO, valor);

    // Verifica se o número foi encontrado
    if (posicao != -1) {
        printf("Numero encontrado na posicao %d\n", posicao);
    } else {
        printf("Numero nao encontrado\n");
    }

    return 0;
}