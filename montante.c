#include <stdio.h>
#include <math.h>

int main(){
  float capital;
  float juros;
  float meses;
  float montante;

  printf("Informe o capital aplicado:");
  scanf("%f",&capital);
  printf("Informe a taxa de juros:");
  scanf("%f",&juros);
  printf("Informe o período de aplicação em meses");
  scanf("%f",&meses);
  montante = capital * pow((1 + juros / 100), meses);
  printf("%f",montante);}