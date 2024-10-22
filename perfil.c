#include<stdio.h>
int main(){
    int a, b, c, d; 

    printf("Informe os dois primeiros numeros do ano que voce nasceu:");
    scanf("%d", &a);

    printf("Informe os dois ultimos numeros do ano que voce nasceu:");
    scanf("%d", &b);

    c = (a + b) / 5;
    d = (a +b) - (5 * c);

    if(d == 0){printf("Timido");}
    if(d == 1){printf("Sonhador");}
    if(d == 2){printf("Paquerador");}
    if(d == 3){printf("Atraente");}
    if(d == 4){printf("Irresitivel");}
    }