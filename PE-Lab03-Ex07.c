/*Exercício 07: Criar um programa que armazene uma lista de nomes de alunos
e uma lista de conceitos. O índice de ambas as listas estão relacionados
(Aluno[1]  Nota[1]). O programa deve varrer a lista de conceitos (usando
for/while) e exibir uma mensagem caso algum dos alunos tenha ficado com ‘A’.
A quantidade de entradas nas listas deve ser especificada por um “#define”. Os
nomes e as notas podem ser definidos na inicialização das variáveis, evitando
assim a necessidade de escrever os dados em cada execução.*/

#include <stdio.h>
#include <string.h>

#define QTD 3

int main(void) {
  char *alunos[QTD] = {"Bruno", "Ana", "Beatriz"};
  char *notas[QTD] = {"C", "A", "B"};

  for(int i=0; i<QTD; i++){
    if(strcmp(notas[i], "A") == 0){
      printf("%s teve conceito A!\n", alunos[i]);
    }
  }
  
  return 0;
}
