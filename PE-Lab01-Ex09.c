/*Exercício 9: Criar um programa que indique o conceito de um aluno com base
em sua nota seguindo a regra da disciplina da tabela abaixo. O programa deve
pedir o valor da nota e transformá-lo em um conceito de “A” a “F”. Dependendo
do conceito, uma mensagem deve ser exibida (e.g. Conceito A – Desempenho
Excepcional).
Conceito Descrição
A Aproveitamento acima de 85% (desempenho excepcional)
B Aproveitamento entre 70% e 85% (bom desempenho)
C Aproveitamento entre 60% e 70% (desempenho adequado)
D Aproveitamento entre 50% e 60% (desempenho mínimo)
F Aproveitamento abaixo de 50% (reprovado)
O Reprovado por falta (reprovado) */

#include <stdio.h>

int main(void) {
  int nota=0;
    
  printf("Digite o valor da nota: \n");
  scanf("%d", &nota);

  nota >= 85? printf("Conceito A – Desempenho Exepcional") : nota > 70? printf("Conceito B – Desempenho Bom") : nota > 60? printf("Conceito C – Desempenho Adequado") : nota > 50? printf("Conceito D – Desempenho Mínimo") : printf("Conceito F – Reprovado");

  return 0;
}
