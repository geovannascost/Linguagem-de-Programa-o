#include<stdio.h>

int main(){

int idade;

printf("Informe sua idade:");
scanf("%d",&idade);

if (idade <= 10){
    printf("Categoria: Infantil");}

if (idade > 10 && idade <= 17){
    printf("Categoria: Juvenil");}

if (idade > 17){
    printf("Categoria: Senior");}
}