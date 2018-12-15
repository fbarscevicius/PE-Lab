/*Exercício 07: Faça um programa que calcule recursivamente a soma dos
elementos de um vetor. A função recursiva deve ter como argumentos o vetor
com valores e o número de elementos deste vetor. A função deve retornar o
valor da soma.*/

#include <stdio.h>

int somaRecursiva(int arr[], int size);

int main(void) {
  int tamanho = 9;
  int vec[10] = {1, 4, 5, 9, 11, 12, 1, 0, 12, 20};

  int soma = somaRecursiva(vec, tamanho);
  printf("A soma é %d", soma);

  return 0;
}

int somaRecursiva(int arr[], int size){

    if (size < 0) {
         return 0;
    }
    
    return arr[size] + somaRecursiva(arr, size - 1);
}
