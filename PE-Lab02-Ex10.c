/*Exercício 10: Crie um programa que retorne a média aritmética de N valores
reais fornecidos pelo usuário usando a instrução “do/while”. O programa deve
requisitar a entrada de valores, e então armazenar a SOMA dos valores a
medida que estes forem fornecidos, bem como a QUANTIDADE de valores
digitados. O processo deve se repetir (“do-while”) até que algum valor
predefinido seja digitado (e.g. 0.0001). Só então o programa deverá retornar a
média, que será a soma dos valores dividida pela quantidade de valores
digitados.*/

#include <stdio.h>

int main(void) {
  
  float valor, soma=0;
  int count=0;

  printf("Digite um valor real, ou 0 para interromper: \n");

  do {
    scanf("%f", &valor);
    soma += valor;
    count++;
  } while(valor != 0);

  printf("A média é %.2f", (float)soma/count);
  
  return 0;
}
