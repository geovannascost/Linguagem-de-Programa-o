#include<stdio.h>
int main(){

int na, n;
float nota, media, soma = 0;
printf("informe a na:");
scanf("%d", &na);

for( n = 1; n <= na; n++){
    printf("informe a nota:\n", n);
    scanf("%f", &nota);
    soma += nota;}
    media = soma / na;
    printf("a media e:\n%f", media);}
