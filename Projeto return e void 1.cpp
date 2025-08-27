#include <stdio.h>
#include <stdlib.h>
//exemplo de funções com retorno "return"
int soma(int a, int b){
	return a+b;// devolve o resultado da soma	
}
main(){
	int x=5,y=7;
	int resultado;
	resultado=soma(x,y);// continua levando o valor 
	printf("A soma de %i e %i eh:%i",x,y,resultado);
}
