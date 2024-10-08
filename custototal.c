#include <stdio.h>

int main(){
  float comprimento;
  float largura;
  float preco;
  float custo;

  printf("Informe o comprimento:");
     scanf("%f",&comprimento);
     printf("Informe a largura:");
       scanf("%f",&largura);
        printf("Informe o preco:");
       scanf("%f",&preco);
        custo = preco * (comprimento * largura);
  printf("%2.2f",custo);
}
