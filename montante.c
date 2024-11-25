#include<stdio.h>
#include<math.h>
int main(){
float C, j;
int p, c;
int montante;

printf("informe o capital:\n");
scanf("%f",&C );

printf("informe os juros: \n");
scanf("%f", &j);

printf("informe o periodo:\n");
scanf("%d", &p);

for( c = 1; c <= p; c++){
montante = C*pow((1 + j / 100), c);
printf("%d° mes = %.2d\n", c, montante);
}}
