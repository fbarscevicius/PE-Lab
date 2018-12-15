/*Exercício 05: Criar um programa que receba um valor real “x” e então calcule e
exiba o valor real “y” tal que y = x² - 2x + 3. */

#include <stdio.h>

int main(void) {

  float x = 0;

  printf("Digite um valor real: \n");
  scanf("%f", &x);
  printf("O valor de y é: %.2f", x*x -2*x +3);
  
  return 0;
}
