#include<stdio.h>
int main(){
int x;


printf("Informe o numero:");
scanf("%d", &x);

if (x == 1){printf("Saldo");}
if (x == 2){printf("Extrato");}
if (x == 3){printf("Saque");}
if (x == 4){printf("Sair");}
}