/*Exercício 02: Criar um programa que calcule y = (x²)/10 para diversos valores
naturais de x (x = 0, 1, 2,... N-1). Os valores de y deverão ser armazenados em
um vetor de N posições, onde N deve ser fornecido pelo usuário. O programa
deverá exibir uma tabela com os valores calculados.*/

#include <stdio.h>

int main(void) {

  int n=0;
  
  printf("Digite o valor de N: \n");
  scanf("%d", &n);

  float result[n];

  printf("X:  | Y:\n");
  for(int i=0; i<n; i++){
    result[i] = (float) (i*i)/10;
    printf("%d   |  %4.2f\n", i, result[i]);
  }

  return 0;
}
