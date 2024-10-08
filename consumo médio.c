#include <stdio.h>

int main(){
  int distancia;
  float litros;
  float cmv;

  printf("Informe a distancia percorrida:");
     scanf("%d",&distancia);
     printf("Informe o gasto do combustível em litros:");
       scanf("%f",&litros);
       cmv = distancia / litros;
  printf("%f",cmv);
}
