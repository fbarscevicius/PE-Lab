/*Exercício 02: Criar um programa que peça para que um valor inteiro seja
digitado, e então exiba este valor em uma mensagem.*/

#include <stdio.h>

int main(void) {
  
  int valor=0;

  printf("Digite um valor inteiro: \n");
  scanf("%d", &valor);
  printf("O valor digitado foi: %d", valor);

  return 0;
}
