/*Escrever um programa em C que leia uma mensagem e conte a quantidade de
  caracteres brancos.*/
#include <stdio.h>
#define SIZE 100

int main(void) {

  char texto[SIZE];
  int i, c = 0;
  printf("Digite seu texto\n");
  scanf("\n%[^\n]", texto);

  for (i = 0; texto[i] != '\0'; i++) {
    if (texto[i] == ' ') {
      c++;
    }
  }

  printf("Existem %d espaços em branco", c);

  return 0;
}
