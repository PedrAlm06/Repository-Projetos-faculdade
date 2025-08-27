#include <stdio.h>
#include <stdlib.h>
#include <string.h>// biblioteca de comandos 
// exercicio -> criar uma estrutura com Nome, Peso e valor
// Para dois produtos Prduto1 e Produto2
typedef struct{
	char Nome[30];
	float Peso;
	float Valor;
}Produtos;
void ImprimeProduto(Produtos S){
	printf("Nome:%s - Peso:%.2f - Valor R$:%.2f \n",
	S.Nome,S.Peso,S.Valor);
}
main(){
	Produtos Produto1,Produto2;
	strcpy(Produto1.Nome,"Produto 1");
	Produto1.Peso=200;
	Produto1.Valor=10.00;
	strcpy(Produto2.Nome,"Produto 2");
	Produto2.Peso=300;
	Produto2.Valor=15.00;
	ImprimeProduto(Produto1);
	ImprimeProduto(Produto2);
	
}
