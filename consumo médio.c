#include <stdio.h>

int main(){
  float distancia;
  float litros;
  float consumomedio;

  printf("Informe a distancia:");
     scanf("%f",&distancia);
     printf("Informe os litros:");
       scanf("%f",&litros);
       consumomedio = litros / distancia;
  printf("%2.2f",consumomedio);
}
