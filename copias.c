#include <stdio.h>

int main(){
  int copias;
  float custo;

  printf("Informe a quantidade de copias:");
     scanf("%d",&copias);
if (copias >= 100){
custo = copias * 0.20;
printf("valor a ser gasto %.2f", custo);
}
if (copias < 100){
custo = copias * 0.25;
printf("valor a ser gasto %.2f", custo);
}
}