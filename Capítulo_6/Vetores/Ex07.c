/* 7-Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida 
deverão ser impressos o maior e o menor elemento desse vetor. */

#include <stdio.h>

int main(void) {

  int vetor[10], maior, menor;

  for(int i = 0; i < 10; i++){
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  maior = vetor[0];
  menor = vetor[0];

  for(int i = 0; i < 10; i++){
    if(maior < vetor[i]){
      maior = vetor[i];
    }
    if(menor > vetor[i]){
      menor = vetor[i];
    }
  }

  printf("Maior valor digitado %d.\n", maior);
  printf("Menor valor digitado %d.\n", menor);
 
  return 0;
}