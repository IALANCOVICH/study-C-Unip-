#include <stdio.h>
#include <stdlib.h>

int main() {
int vetor[20], numero, razao, i=0;
printf("Digite um numero: ");
  scanf("%d", &numero);
printf("\nDigite a razao: ");
  scanf("%d", &razao);
vetor[i] = numero;
  printf("\n");
  for(i = 0; i < 20; i++){
vetor[i+1] = vetor[i] + razao;
}
printf("-PROGRESSÃO ARITIMÉTICA-");
  for (i = 0; i < 20; i++){
printf("\n%d", vetor[i]);
}
return 0;
}
