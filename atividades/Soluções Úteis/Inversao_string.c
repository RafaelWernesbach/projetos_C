/*
Pequeno Programa para inversão de strings
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {
  char texto[SIZE];
  int i;

  printf("Digite uma string: ");
  scanf("%[^\n]", texto);

  int tamanho = strlen(texto);

  printf("String invertida: ");
  for (i = tamanho - 1; i >= 0; i--) {
    printf("%c", texto[i]);
  }
  printf("\n");

  return 0;
}
