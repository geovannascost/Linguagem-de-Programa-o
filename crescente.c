#include <stdio.h>
int main(){
    int n1;
    int n2;
    int n3;
   
printf("Informe o numero 1:");
scanf("%d",&n1);

printf("Informe o numero 2:");
scanf("%d",&n2);

printf("Informe o numero 3:");
scanf("%d",&n3);

if (n1 < n2 && n2 < n3){printf("A ordem crescente sera: %d, %d, %d", n1, n2, n3);}

if (n2 < n1 && n1 < n3){printf("A ordem crescente sera: %d, %d, %d", n2, n1, n3);}

if (n3 < n1 && n1 < n2){printf("A ordem crescente sera: %d, %d, %d", n3, n1, n2);}

if (n1 < n2 && n2 < n3){printf("A ordem crescente sera: %d, %d, %d", n1, 2, n3);}

if (n3 < n2 && n2 < n1){printf("A ordem crescente sera: %d, %d, %d", n3, n2, n1);}

if (n2 < n3 && n3 < n1){printf("A ordem crescente sera: %d, %d, %d", n2, n3, n1);}
}