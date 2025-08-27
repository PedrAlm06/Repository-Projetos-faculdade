#include <stdio.h>
#include <stdlib.h>
//exemplo com void e return
void media(float n1,float n2){//void não retorna nada
   float media=(n1+n2)/2;
   printf("media=%.2f", media);
   if (media>=5.0)
   	printf("Aprovado");
    else
   printf("Reprovado");
}
float lernota(){// com o tipo da variavel posso ter retorno
	float n;//declara varaivel com ponto flutuante
	printf("Digite a nota:");//escreve na tela
	scanf("%f",&n);//entra com o valor
	return n;
}
main(){
	float n1,n2;
	n1=lernota();//com return
	n2=lernota();//com return
	media(n1,n2);//com void
}
