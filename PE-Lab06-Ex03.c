/*
Exercício 03: 
Crie um programa que use uma estrutura para armazenar informações de alunos de uma turma. A estrutura deve conter nome, frequência e nota final. O programa deve avaliar quantos alunos foram aprovados, quantos foram reprovados por falta e a média da turma.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
  char nome[20];
  int frequencia;
  float nota;
};

int main(void){

  struct Aluno alunos[4] = {0};

  for(int i=0; i<4; i++){
    char aux = 'a'+i;
    char aluno[] = "aluno_";
    size_t len = strlen(aluno);
    char *str2 = malloc(len + 1 + 1);
    strcpy(str2, aluno);
    str2[len] = aux;
    str2[len+1] = '\0';
    strcpy(alunos[i].nome, str2);
    alunos[i].frequencia = i*10 + 60;
    alunos[i].nota = (float) i*2 + 2;
    free(str2);
  }

  int aprovados = 0;
  int reprovados_falta = 0;
  float media = 0.0;

  for(int i=0; i<4; i++){
    media += alunos[i].nota;
    if(alunos[i].nota >= 7 & alunos[i].frequencia >= 75){
      aprovados++;      
    }
    if(alunos[i].frequencia < 75){
      reprovados_falta++;
    }
  }

  printf("Foram aprovados %d alunos.\n", aprovados);
  printf("Foram reprovados %d alunos por falta.\n", reprovados_falta);
  printf("A média da turma foi %.2f", media/4);

  return 0;
}

