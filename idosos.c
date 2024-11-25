#include<stdio.h>
int main(){
int ni, i, c, m;

printf("informe o numero de idosos:\n");
scanf("%d", &ni);
m = -1;
for(c = 1; c <= ni; c++){
    printf("idade?\n", c);
    scanf("%d", &i);

    if ( i > m) m = i;}

    printf("mais idoso:%d \n", m);
}