#include<stdio.h>

int main(){
    float n1;
    float n2;
    float n3;
    float n4;
    float media;

    printf("Informe a n1:");
    scanf("%f",&n1);

    printf("Informe a n2:");
    scanf("%f",&n2);

    printf("Informe a n3:");
    scanf("%f",&n3);

    printf("Informe a n4:");
    scanf("%f",&n4);

media = (n1 + n2 + n3 + n4) / 4;
printf("%2.2f",media);

if(media >= 7){
printf("Aprovado");}

if(4 <= media && media < 7){
printf("Exame Final");}

if(media < 4){
printf("Reprovado");}
}