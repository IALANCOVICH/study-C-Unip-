#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
int ano;
int verifica(int ano);
  printf("Digite um ano: "); scanf("%d",&ano);
  if (verifica(ano) == 1)
  printf("%d, ano bissexto!",ano);
  else
  printf("%d, não é ano bissexto!",ano);
  return 0;
  }
  int verifica(int x){
  if(x%400==0 || x%4==0 && x%100!=0)
  return 1;
  else
  return 0;
  }
