#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 10
#define DELTA (75 - 11 + 1) + 11

struct Pessoa {
    char nome[55];
    int idade;
    int sexo;
};


void buscarnome(char *nome, struct Pessoa *P_pessoas);

int main(void) {
    srand(time(NULL));
    struct Pessoa *P_pessoas = (struct Pessoa *)malloc(sizeof(struct Pessoa) * SIZE);

    if (P_pessoas == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }
    
    for (int i = 0; i < SIZE; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", i[P_pessoas].nome);
        P_pessoas[i].idade = rand() % (75 - 11 + 1) + 11;
        P_pessoas[i].sexo = rand() % 2;
    }

    while (1) {
        printf("Digite o nome da pessoa que deseja buscar (escreva 'sair' para sair do menu): ");
        char nome_busca[55];
        scanf("%s", nome_busca);
        if (strcmp(nome_busca, "sair") == 0) {
            break;
        }
        buscarnome(nome_busca, P_pessoas);
    }

    free(P_pessoas);
    return 0;
}

void buscarnome(char *nome, struct Pessoa *P_pessoas) {
    for (int i = 0; i < SIZE; i++) {
        if (strcmp(nome, P_pessoas[i].nome) == 0) {
            printf("Nome: %s\n", P_pessoas[i].nome);
            printf("Idade: %d\n", P_pessoas[i].idade);
            printf("Sexo: %d\n", P_pessoas[i].sexo);
            return;
        }
    }
    printf("Pessoa não encontrada\n");
}
