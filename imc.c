#include <stdio.h>
int main(){
    float IMC;
    float peso;
    float altura;

    printf("Informe seu peso:");
     scanf("%f",&peso);
     printf("Informe sua altura:");
       scanf("%f",&altura);
       IMC = peso / (altura * altura);
       printf("%2.2f",IMC);
}
