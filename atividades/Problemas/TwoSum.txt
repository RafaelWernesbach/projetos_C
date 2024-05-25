/*
Resolução do famoso problema TwoSum:

Dado um array de inteiros nums e um inteiro target, retornar
os índices dos dois números que somam target.
*/

#include <stdio.h>
#include <stdlib.h>

int* somaDois(int* numeros, int tamanho, int alvo, int* tamanhoRetorno) {
    int* resultado = (int*)malloc(2 * sizeof(int));
    *tamanhoRetorno = 2;
    
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] + numeros[j] == alvo) {
                resultado[0] = i;
                resultado[1] = j;
                return resultado;
            }
        }
    }
    return NULL; // Nenhuma solução encontrada
}

int main() {
    int numeros[] = {2, 7, 11, 15};
    int alvo = 9;
    int tamanhoRetorno;
    int* resultado = somaDois(numeros, 4, alvo, &tamanhoRetorno);
    
    if (resultado != NULL) {
        printf("Índices: %d, %d\n", resultado[0], resultado[1]);
        free(resultado);
    } else {
        printf("Nenhuma solução encontrada.\n");
    }
    return 0;
}
