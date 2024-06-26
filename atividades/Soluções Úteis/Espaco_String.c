/*Escrever um programa que leia várias mensagens (uma por uma) e exiba cada
mensagem com um espaço em branco entre todos os caracteres. Pare o programa
quando for digitada a palavra “FIM”.*/

#include <stdio.h>
#include <string.h>

#define size 100
#define size2 200
int main(void) {
  char palavra[size], palavranova[size2];
  int fim = 1, tamanho;

  while (fim) {
    printf("\nDigite uma palavra(digite fim para encerrar o programa): ");
    scanf("%s", palavra);

    if (strcmp(palavra, "FIM") == 0 || strcmp(palavra, "fim") == 0) {
      printf("Programa encerrado");
      fim = 0;

    } else {
      tamanho = strlen(palavra);
      int index = 0;
      int i;
      for (i = 0; i < tamanho; i++) {
        palavranova[index] = palavra[i];
        index++;
        palavranova[index] = ' ';
        index++;
      }
      palavranova[index] = '\0';
      printf("Palavra nova: %s\n", palavranova);
    }
  }
  return 0;
}
