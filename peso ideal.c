#include<stdio.h>
int main(){
    float a, b, c;
    printf("Informe seu sexo:\n (1)Mascullino\n (2) Feminino\n");
    scanf("%f",&a);

    printf("Qual e sua altura?\n");
    scanf("%f",&b);

    if(a == 1) {c = (72.7 * b) - 58; printf("Seu peso ideal: %.2f",c);}
    if(a == 2) {c = (62.1 * b) - 47.7; printf("Seu peso ideal: %.2f",c);}
}