/* Prototipo basico de um programa para desenvolver binomios de newton usando C
aplicando o metodo de desenvolvimento por combinação
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Prototipando as funções

unsigned long long fatorial(int n);
unsigned long long combinacao(int n, int p);
unsigned long long analisecomb(unsigned int expoente, int contador,
                               unsigned long long resultado[expoente]);

// Main

int main(void) {

  unsigned int expoente, a, x; // Criando as variaveis que armazenarão os dois
                               // valores do binomio e seu expoente

  // Recebendo os valores do binomio
  printf("Insira o valor de x: \n");
  scanf("%d", &x);
  printf("Insira o valor de a\n");
  scanf("%d", &a);
  printf("Insira o valor do expoente: \n");
  scanf("%d", &expoente);

  /*
  Logica para a resolução das operações do termo 0 até o termo n(n =
  expoente) de acordo com o metodo de resolução utilizando analise
  combinatoria
  */

  int vetorax[expoente]; // vetor que armazena os valores de x + a

  printf("Os valores de x + a são: \n");
  /*
A logica se baseia em realizar a operação de a + x, onde x será elevado ao
expoente que reduzirá em 1 a cada loop, e a será elevado a j que começa em 0 e
aumentará em 1 em cada loop, até atingir o valor do expoente.
  */
  for (int j = 0; j <= expoente; j++) {
    vetorax[j] = pow(a, j) + pow(x, expoente - j);
    printf("%d\n", vetorax[j]);
  }

  // Logica para o calculo dos coeficientes binomiais
  unsigned long long
      vetorcoef[expoente]; // Vetor que irá armazenar os coeficientes binomiais

  printf("\nOs coeficientes são: \n");
  /*
  Na resolução pelo metodo de analise combinatoria, o valor de cada coeficiente
  pode ser definido pela combinação de n onde n é o expoente e p onde p é o
  valor de j, que vai de 0 até o valor do expoente. sendo assim serão realizadas
  n combinações p a p onde p aumetará em 1 até atingir n e termos combinação de
  n, n a n
  */
  for (int i = 0; i <= expoente; i++) {
    // observe que neste loop criamos um contador i que entrará como argumento
    // representando p

    vetorcoef[i] = analisecomb(expoente, i, vetorcoef);
    printf(" %llu \n", vetorcoef[i]);
  }

  unsigned long long
      vetorfinal[expoente]; // Nesse vetor serão armazenados os valores de (a +
                            // x) * o coeficiente binomial

  printf("O binomio desenvolvido fica: \n");

  for (int k = 0; k <= expoente; k++) {

    vetorfinal[k] = vetorcoef[k] * vetorax[k];
    printf("%llu", vetorfinal[k]);

    if (k < expoente) {
      // uma pequena condição para separar corretamente os termos do binomio
      // evitando um erro de impressão
      printf(" + ");
    }
  }

  return 0;
}

unsigned long long fatorial(int n) { // Função para o calculo de fatorial
  if ((n == 0) || (n == 1)) {
    return 1;
  } else {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
      result *= i;
    }
    return result;
  }
}
unsigned long long combinacao(int n,
                              int p) { // Função para o calculo de combinação

  unsigned long long numerador = fatorial(n);
  unsigned long long denominador = fatorial(p) * fatorial(n - p);
  return numerador / denominador;
}
unsigned long long analisecomb(unsigned int expoente, int contador,
                               unsigned long long resultado[expoente]) {
  // Função para a passagem dos valores de cada coeficente binomial de modo que
  // não seja necessario o uso de ponteiros em vetores(gambiarra)
  resultado[contador] = combinacao(expoente, contador);
  return resultado[contador];
}
