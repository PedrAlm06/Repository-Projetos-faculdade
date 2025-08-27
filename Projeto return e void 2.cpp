#include <stdio.h>
#include <stdlib.h>
//exemplo de funções com retorno "return"2
float media(float a,float b){
	return(a+b)/2;//devolve a media
}
main(){
	float n1=8.5,n2=6.5;
	float resultado;
	//chamando a função media 
	resultado=media(n1,n2);
	printf("A media de %.2f e %.2f eh: %.2f",n1,n2,resultado);
}
