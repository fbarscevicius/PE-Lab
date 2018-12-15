/*Exercício 08: Crie um programa que use a instrução “for” para identificar os
divisores de um número inteiro. O usuário deverá fornecer um valor inteiro, e o
programa deverá retornar a mensagem “O número X é divisível por Y” para
cada Y divisor de X. Se X for primo, uma mensagem diferente será exibida.*/

#include <stdio.h>

int main(void) {
  long int num=0, counter=0;

  printf("Digite um número inteiro: \n");
  scanf("%d", &num);

  for(int i=1; i<=num; i++){
    if(num % i == 0){
      printf("%d é divisível por %d\n", num, i);
      counter++;
    }
  }

  if(counter<=2){
      printf("%d é primo", num);
    }

  return 0;
}
