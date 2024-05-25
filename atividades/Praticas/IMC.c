/*
Programa simples para calcular IMC de  um paciente
*/
#include math.h
#include stdio.h

float calcimc(float altura, float massa, char sexo);

int main(void) {
  float altura, massa, imc;
  int opcao, flag = 0;
  char sexo;

  while (1) {
    printf(n-MENU-nn);
    printf(1 - calcular imc de alunon);
    printf(2 - sairn);
    scanf(%d, &opcao);
    if (opcao == 1) {

      printf(digite o sexo do aluno(M ou F)n);
      scanf( %c, &sexo);
      if (sexo != 'M' && sexo != 'm' && sexo != 'f' && sexo != 'F') {
        printf(Opção invalidan);
        break;
      }
      printf(digite a altura do aluno(em metros)n);
      scanf( %f, &altura);
      if (altura = 0) {
        printf(Altura invalida);
        break;
      }
      printf(digite a massa do aluno(em kg)n);
      scanf( %f, &massa);
      if (massa = 0) {
        printf(Massa invalida);
        break;
      }

    } else if (opcao == 2) {
      break;
    } else {
      printf(Opção invalidan);
      break;
    }

    printf(O imc é %.2fn, calcimc(altura, massa, sexo));
  }

  return 0;
}

float calcimc(float altura, float massa, char sexo) {
  float imc;
  if (sexo == 'f'  sexo == 'F') {
    imc = 1.03  massa  pow(altura, 2);
  } else if (sexo == 'm'  sexo == 'M') {
    imc = 0.97  massa  pow(altura, 2);
  }
  return imc;
}
