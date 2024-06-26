/* Um sistema de mercado que possui um estoque de produtos e um sistema de
vendas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1

int pesqbin(int cod[], int alv, int esq, int dir) {
  while (esq <= dir) {
    int mei = esq + (dir - esq) / 2;
    if (cod[mei] == alv) {
      return mei;
    } else if (cod[mei] < alv) {
      esq = mei + 1;
    } else {
      dir = mei - 1;
    }
  }
  return -1;
}

int main(void) {
  int cod[SIZE], quant[SIZE];
  float prec[SIZE];
  int i, codpesq;

  for (i = 0; i < SIZE; i++) {
    printf("Digite o código do produto %d: ", i + 1);
    scanf("%d", &cod[i]);
    printf("Digite a quantidade do produto %d: ", i + 1);
    scanf("%d", &quant[i]);
    printf("Digite o preço do produto %d: ", i + 1);
    scanf("%f", &prec[i]);
  }

  for (i = 0; i < SIZE - 1; i++) {
    for (int j = i + 1; j < SIZE; j++) {
      if (cod[i] > cod[j]) {

        int tempcod = cod[i];
        cod[i] = cod[j];
        cod[j] = tempcod;

        int tempquan = quant[i];
        quant[i] = quant[j];
        quant[j] = tempquan;

        float tempprec = prec[i];
        prec[i] = prec[j];
        prec[j] = tempprec;
      }
    }
  }

  printf("Digite o código do produto para a pesquisa: ");
  scanf("%d", &codpesq);
  int ind = pesqbin(cod, codpesq, 0, SIZE - 1);

  if (ind != -1) {
    printf("Código: %d\n", cod[ind]);
    printf("Quantidade: %d\n", quant[ind]);
    printf("Preço: %.2f\n", prec[ind]);
  } else {
    printf("Produto não encontrada.\n");
  }

  return 0;
}
