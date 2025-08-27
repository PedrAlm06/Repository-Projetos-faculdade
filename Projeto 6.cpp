#include <stdio.h>
#include <stdlib.h>
//exemplo de funções
void soma (int n1,int n2){//apenas os valores chegam aqui
	printf("Resultado da soma=%i", (n1+n2));
}
void subtrair (int x,int y){//void não retorna nada,resolve aqui
	printf("Resultado da subtracao=%i", (x-y));
}
void multiplicar (int a,int b){//void não retorna nada,resolve aqui
	printf("Resultado da multiplicacao=%i", (a*b));
}
void dividir (int a,int b){//void não retorna nada,resolve aqui
	printf("Resultado da divisao=%i", (a/b));
}
main(){
	int a,b;
	printf("Digite o primeiro valor:\n");
	scanf("%i", &a);
	printf("Digite o segundo valor:\n");
	scanf("%i",&b);
	int opcao;
	printf("Escolha 1-somar, 2-subtrair, 3- multiplicar, 4-dividir:\n");
	scanf("%d" ,&opcao);
	if(opcao==1) soma (a,b);// desvio de codigo para função
	if(opcao==2) subtrair(a,b);
	if(opcao==3) multiplicar(a,b);
	if(opcao==4) dividir(a,b);
	




}
