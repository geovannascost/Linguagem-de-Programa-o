#include<stdio.h>
int main(){

int n, c, r;
printf("Numero?");
 scanf("%d", &n); 

printf("Tabuada do %d",n);
for (c = 10 ; c>=1 ; c--){ 
    r = n * c;

printf("%d x %2d = %3d\n", n, c, r);} 
}