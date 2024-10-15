#include<stdio.h>
int main(){

int m1;
int m2;
int m3;

    printf("Informe a medida 1:");
    scanf("%d",&m1);

    printf("Informe a medida 2:");
    scanf("%d",&m2);

    printf("Informe a medida 3:");
    scanf("%d",&m3);

    if (m1 == m2 && m2 == m3){printf("O triangulo sera equilatero");}
    if (m1 == m2 && m2 != m3 && m1 != m3){printf("O triangulo sera isoceles");}
    if (m2 == m3 && m3 != m1 && m2 != m1){printf("O triangulo sera isoceles");}
    if (m1 == m3 && m3 != m2 && m2 != m1){printf("O triangulo sera isoceles");}
    if (m1 != m2 && m1 != m3){printf("O triangulo sera escaleno");}
}