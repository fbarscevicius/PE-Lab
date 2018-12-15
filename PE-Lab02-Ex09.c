/*Exercício 09: Crie um programa que retorne o fatorial de
um número inteiro fornecido pelo usuário usando a instrução “while”.*/

#include <stdio.h>

int main(void) {
  
  int num;
  long int fatorial=1;
  
  printf("Digite um número inteiro: \n");
  scanf("%d", &num);

  while(num > 1){
    fatorial = fatorial*num;
    num--;
  }
  
  printf("O fatorial é %d", fatorial);

  return 0;
}
