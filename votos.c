#include<stdio.h>
int main (){
int x;
char voto;
int somaa = 0;
int somab = 0;
int somac = 0;
int somax = 0;
int e;

printf("informe o numero de eleitores:\n");
scanf("%d", &e);

 for(x = 1; x <=e; x++){
    printf("%d voto: (candidatos: a, b, c. nulo = qualquer letra)", x);
    scanf("%*c%c", &voto);
    if(voto == 'a'){
        somaa++;}

        else if(voto == 'b'){
        somab++;}
        
        else if(voto == 'c'){
            somac++;} 
            
            else{ somax++;}
 }
 
printf("Candidato a = %d votos\n", somaa);
printf("Candidato b = %d votos\n", somab);
printf("Candidato c = %d votos\n", somac);
printf("Candidato x = %d votos\n", somax);


}