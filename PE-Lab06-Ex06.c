/*Exercício 06: Neste exemplo será necessário criar dois programas. O primeiro
deve gerar 1000 valores aleatórios no intervalo entre 0 e 1, armazenando-os
em um arquivo. O segundo deve abrir este arquivo e calcular a média dos
valores calculados. Este valor deverá ser armazenado no próprio arquivo.*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 1000

void gerarValores(void);
void calcularMedia(void);
float aleatorio(void);

int main(void){

  gerarValores();
  calcularMedia();

  return 0;
}

float aleatorio(void){
  return (double)rand() / (double)RAND_MAX ; 
}

void gerarValores(void){
  float num;
  FILE *fptr;

  fptr = fopen("valores.txt", "a");
  
  if(fptr == NULL){
    printf("Error!");
    exit(1);
  }

  for(int i=0; i<QTD; i++){
    num = aleatorio();
    fprintf(fptr, "%f\n", num);
  }

  fclose(fptr);
}

void calcularMedia(void){
  float num, media = 0;
  FILE *fptr;

  fptr = fopen("valores.txt", "a");
  
  if(fptr == NULL){
    printf("Error!");
    exit(1);
  }

  for(int i=0; i<QTD; i++){
    fscanf(fptr, "%f", &num);
    media += num;
  }

  media /= QTD;
  fprintf(fptr, "%f", media);
}
