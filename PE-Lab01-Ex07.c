/*Exercício 07: Criar um programa que receba um valor e indique em uma
mensagem se este valor é par ou impar. */

#include <stdio.h>

int main(void) {

  int valor=0;

  printf("Digite um valor inteiro: \n");
  scanf("%d", &valor);

  valor % 2 == 0 ? printf("%d é par.", valor) : printf("%d é ímpar.", valor);

  return 0;
}
