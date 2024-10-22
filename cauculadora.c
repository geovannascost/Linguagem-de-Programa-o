#include<stdio.h>
int main (){
    int x;
    int n1;
    int n2;
    float resposta;


    printf("Escolha a operacao:\n (1)Soma\n (2)Subtracao\n (3)Multiplicacao\n (4)Divisao\n");
    scanf("%d",&x);

    printf("Informe o n1:");
    scanf("%d",&n1);

    printf("Informe o n2:");
    scanf("%d",&n2);

if(x == 1){resposta = n1 + n2;printf("soma do n1 + n2 = %.2f",resposta);}
if(x == 2){resposta = n1 - n2;printf("subtracao do n1 - n2 = %.2f",resposta);}
if(x == 3){resposta = n1 * n2;printf("multiplicacao do n1 * n2 = %.2f",resposta);}
if(x == 4){resposta = n1 / n2;printf("divisao do n1 / n2 = %.2f",resposta);}}