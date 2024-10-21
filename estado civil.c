#include<stdio.h>
int main(){
char x;
char S ='S';
char C ='C';
char D ='D';
char V='V';
    
printf("Digite seu estado civil:");
scanf("%c", &x);

if (x == S){printf("Solteiro");}
if (x == C){printf("Casado");}
if (x == D){printf("Divociado");}
if (x == V){printf("Viuvo");}
}