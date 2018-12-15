/*Exercício 07: Faça um programa que retire os espaços em branco de uma
string e depois escreva a string resultante. A verificação dos espaços deve ser
feita por meio de ponteiros em uma função com passagem por referência.*/

#include <stdio.h>

void retiraEspaco(char *s1, const char *s2);

int main(void) {

  char string1[20];
  char *string2 = "Teste para retirar espaços.";

  retiraEspaco(string1, string2);  
  printf("%s", string1);

  return 0;
}

void retiraEspaco(char *s1, const char *s2){
  while(*s2 != '\0'){
    if(*s2 == ' '){
      s2++;
    } else {
      *s1 = *s2;
      s1++;
      s2++;
    }
  }
  s1++;
  *s1 = '\0';
}
  
