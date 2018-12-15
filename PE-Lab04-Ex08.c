/*Exercício 08: Faça um programa que calcule o quadrado de cada um dos
elementos de um vetor, salvando estes resultados no mesmo vetor. O
programa deve usar uma função com passagem de parâmetros por referência.*/

#include <stdio.h>

void quadrado(int *p);

int main(void) {

  int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  quadrado(numeros);

  return 0;
}

void quadrado(int *p){
  for(int i=0; i<10; i++){
    printf("O quadrado de %d é ", *p);
    *p = (*p) * (*p);
    printf("%d\n", *p);
    p++; 
  }
}
  
