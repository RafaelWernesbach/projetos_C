/*
Escrever um programa em C que leia uma mensagem e exiba na tela a quantidade de
vezes que aparece a substring “UVV” na mensagem lida do usuário.*/

#include <stdio.h>
#include <string.h>

#define size 1000
int main(void) {
  char texto[size];
  int contador = 0, tamanho;

  printf("Digite uma mensagem: ");
  scanf("\n%[^\n]", texto);

  tamanho = strlen(texto);

  for (int i = 0; i < tamanho; i++) {
    if (texto[i] == 'U' && texto[i + 1] == 'V' && texto[i + 2] == 'V') {
      contador++;
    }
  }
  printf("\nA substring UVV aparece %d vezes", contador);
  return 0;
}
