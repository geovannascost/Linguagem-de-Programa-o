#include<stdio.h>

int main(){
int producoes;
int defeitos;
int porcentagem;
 
 printf("Quantas pecas foram produzidas?");
 scanf("%d",&producoes);

 printf("Quantas pecas deifeituosas?");
 scanf("%d",&defeitos);

porcentagem = producoes * 10 / 100;

if (defeitos >= porcentagem){
printf("A maquina precisa de manutencao");
return 0;}
printf("Nao precisa de manutencao");
}