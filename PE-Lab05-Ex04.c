/*Exercício 04: Refaça o exercício anterior usando as funções trigonométricas da
biblioteca math.h. Use as funções sin, cos, tan, asin, acos, atan.
https://en.wikipedia.org/wiki/C_mathematical_functions */

#include <stdio.h>
#include <math.h>

// Ponteiro para um vetor de funções
double (*p[6]) (double x);

int main(void){
  
  int op;
  double result;
  double num;

  p[0] = sin;
  p[1] = cos;
  p[2] = tan;
  p[3] = asin;
  p[4] = acos;
  p[5] = atan;

  printf("Digite 1 número: ");
  scanf("%lf", &num);

  printf("0: Sen, 1: Cos, 2: Tan, 3: ArcSen, 4: ArcCos; 5: ArcTan\n");
  
  do {

    printf("Digite o número da operação: ");
    scanf("%d", &op);

  } while(op<0 || op>5);

  result = (*p[op])(num);
  printf("O resultado é: %.2f", result);

  return 0;
  }
